# game/app specific values
export APP_VERSION="1.0"
export ICONSDIR="icons"
export ICONSFILENAME="fallout2"
export PRODUCT_NAME="fallout2-ce"
export EXECUTABLE_NAME="fallout2-ce"
export PKGINFO="APPLF2CE"
export COPYRIGHT_TEXT="Copyright © 1998 Black Isle Studios. All rights reserved."

#constants
source ../MSPScripts/constants.sh

# export BUNDLE_ID="com.alexbatalov.fallout2-ce"

rm -rf ${BUILT_PRODUCTS_DIR}
mkdir ${BUILT_PRODUCTS_DIR}

rm -rf ${X86_64_BUILD_FOLDER}
mkdir ${X86_64_BUILD_FOLDER}
cd ${X86_64_BUILD_FOLDER}
/usr/local/bin/cmake .. -DCMAKE_OSX_ARCHITECTURES=x86_64 -DCMAKE_OSX_DEPLOYMENT_TARGET=11.0 -DSDL2_DIR=/usr/local/lib/cmake/SDL2
make -j$NCPU
cd ..

rm -rf ${ARM64_BUILD_FOLDER}
mkdir ${ARM64_BUILD_FOLDER}
cd ${ARM64_BUILD_FOLDER}
cmake .. -DCMAKE_OSX_ARCHITECTURES=arm64 -DCMAKE_OSX_DEPLOYMENT_TARGET=11.0
make -j$NCPU
cd ..

# create the app bundle
"../MSPScripts/build_app_bundle.sh"

rm ${BUILT_PRODUCTS_DIR}/${WRAPPER_NAME}/Contents/Info.plist
cp ${ARM64_BUILD_FOLDER}/${WRAPPER_NAME}/Contents/Info.plist ${BUILT_PRODUCTS_DIR}/${WRAPPER_NAME}/Contents

"../MSPScripts/sign_and_notarize.sh" "$1"