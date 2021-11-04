#include "item.h"

struct item_s item_create(int index,
	struct entity_s *home_holder)
{
	struct item_s to_ret = {index, 0, home_holder};
	return to_ret;
}

enum item_e item_change_holder(struct item_s *to_mod,
	struct entity_s *new_holder)
{
	if (!new_holder || !to_mod) {
		return NO_HOLDER_CHANGE;
	} else if (to_mod->holder) {
		return HOLDER_OCCUPIED;
	} else {
		to_mod->holder = new_holder;
		return HOLDER_OUT;
	}
}

enum item_e item_return_home(struct item_s *to_mod)
{
	if (!to_mod->holder) {
		return NO_HOLDER_CHANGE;
	} else {
		to_mod->holder = 0x0;
		return HOLDER_RETURN;
	}
}