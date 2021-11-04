#ifndef _ITEM_
#define _ITEM_
#include "entity.h"

enum item_e
{
	NO_HOLDER_CHANGE,
	HOLDER_OUT,
	HOLDER_OCCUPIED,
	HOLDER_RETURN
};

struct item_s
{
	int index;
	struct entity_s *holder;
	struct entity_s *home;
};

struct item_s item_create(int index,
	struct entity_s *home_holder);
enum item_e item_change_holder(struct item_s *to_mod, 
	struct entity_s *new_holder);
enum item_e item_return_home(struct item_s *to_mod);
#endif /* _ITEM_ */