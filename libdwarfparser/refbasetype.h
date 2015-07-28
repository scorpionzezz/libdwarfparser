#ifndef _REFBASETYPE_H_
#define _REFBASETYPE_H_

#include "basetype.h"

class RefBaseType: public BaseType {
public:
	RefBaseType(DwarfParser *parser, const Dwarf_Die & object, const std::string &name);
	virtual ~RefBaseType();

	void resolveBaseType();
	BaseType* getBaseType();
	
	virtual uint32_t getByteSize();
	
	static RefBaseType* findRefBaseTypeByID(uint64_t id);
	static RefBaseType* findRefBaseTypeByName(std::string name);

	void print();

protected:
	uint64_t type;
	BaseType* base;
	
	typedef std::map<std::string, RefBaseType*> RefBaseTypeNameMap;
	static RefBaseTypeNameMap refBaseTypeNameMap;
};


#endif  /* _REFBASETYPE_H_ */

