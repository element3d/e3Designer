
#ifndef Properties_H_
#define Properties_H_

#include "private/PropertiesBase.h"

class E3_EXPORT Properties : public PropertiesBase
{
public:
	Properties(e3::Element* pParent = nullptr);

	void SetElement(e3::Element* pElement);

private:
	e3::Element* mElements = nullptr;
};

#endif // Properties_H_

