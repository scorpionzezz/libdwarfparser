#ifndef _REFERENCINGTYPE_H_
#define _REFERENCINGTYPE_H_

#include "libdwarf/dwarf.h"
#include "libdwarf/libdwarf.h"

#include "basetype.h"

#include "dwarfparser.h"

class ReferencingType {
public:
	ReferencingType(Dwarf_Die object);
	virtual ~ReferencingType();

	BaseType *getBaseType();

protected:

	uint64_t type;
	BaseType* base;
	
};

#endif  /* _REFERENCINGTYPE_H_ */

