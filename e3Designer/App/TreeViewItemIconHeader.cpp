#include "TreeViewItemIconHeader.h"

TreeViewItemIconHeader::TreeViewItemIconHeader(e3::Element* pParent)
	: TreeViewItemIconHeaderBase(pParent)
{

}

void TreeViewItemIconHeader::SetIconCharcode(const std::string& charcode)
{
	mIcon->SetCharcode(charcode);
}

void TreeViewItemIconHeader::SetTitle(const std::string& title, bool translate)
{
	mText->SetText(title, translate);
}

void TreeViewItemIconHeader::OnMouseEnter(e3::MouseEvent* pE)
{
	TreeViewItemIconHeaderBase::OnMouseEnter(pE);
	SetBackgroundColor(glm::vec4(0, 0, 0, 20));
}

void TreeViewItemIconHeader::OnMouseLeave(e3::MouseEvent* pE)
{
	TreeViewItemIconHeaderBase::OnMouseLeave(pE);
	SetBackgroundColor(glm::vec4(0, 0, 0, 0));
}