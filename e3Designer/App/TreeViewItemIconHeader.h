
#ifndef TreeViewItemIconHeader_H_
#define TreeViewItemIconHeader_H_

#include "private/TreeViewItemIconHeaderBase.h"

class E3_EXPORT TreeViewItemIconHeader : public TreeViewItemIconHeaderBase
{
public:
	TreeViewItemIconHeader(e3::Element* pParent = nullptr);

	void SetIconCharcode(const std::string& charcode);
	void SetTitle(const std::string& title, bool translate = false);

	virtual void OnMouseEnter(e3::MouseEvent* pE) override;
	virtual void OnMouseLeave(e3::MouseEvent* pE) override;
};

#endif // TreeViewItemIconHeader_H_

