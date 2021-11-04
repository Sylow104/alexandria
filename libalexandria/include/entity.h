#ifndef _ENTITY_
#define _ENTITY_

enum entity_e
{
	NO_ENTITY_CHANGE,
};

struct entity_s
{
	int id;
};

struct entity_s entity_create(int id);

#endif /* _ENTITY_ */