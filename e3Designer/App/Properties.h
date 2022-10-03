
#ifndef Properties_H_
#define Properties_H_

#include "private/PropertiesBase.h"

class Workspace;
class E3_EXPORT Properties : public PropertiesBase
{
public:
	Properties(e3::Element* pParent = nullptr);

	void SetWorkspace(Workspace* pWorkspace) { mWorkspace = pWorkspace; }
	void SetElement(e3::Element* pElement);

private:
	e3::Element* mElement = nullptr;
	Workspace* mWorkspace = nullptr;
};

#endif // Properties_H_

