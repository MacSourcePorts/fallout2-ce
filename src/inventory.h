#ifndef INVENTORY_H
#define INVENTORY_H

#include "obj_types.h"

namespace fallout {

typedef void InventoryPrintItemDescriptionHandler(char* string);

void _inven_reset_dude();
void inventoryOpen();
void _adjust_ac(Object* critter, Object* oldArmor, Object* newArmor);
void inventoryOpenUseItemOn(Object* a1);
Object* critterGetItem2(Object* obj);
Object* critterGetItem1(Object* obj);
Object* critterGetArmor(Object* obj);
Object* objectGetCarriedObjectByPid(Object* obj, int pid);
int objectGetCarriedQuantityByPid(Object* obj, int pid);
Object* _inven_find_type(Object* obj, int a2, int* inout_a3);
Object* _inven_find_id(Object* obj, int a2);
Object* _inven_index_ptr(Object* obj, int a2);
int _inven_wield(Object* a1, Object* a2, int a3);
int _invenWieldFunc(Object* a1, Object* a2, int a3, bool a4);
int _inven_unwield(Object* critter_obj, int a2);
int _invenUnwieldFunc(Object* obj, int a2, int a3);
int inventoryOpenLooting(Object* a1, Object* a2);
int inventoryOpenStealing(Object* a1, Object* a2);
void inventoryOpenTrade(int win, Object* a2, Object* a3, Object* a4, int a5);
int _inven_set_timer(Object* a1);

} // namespace fallout

#endif /* INVENTORY_H */
