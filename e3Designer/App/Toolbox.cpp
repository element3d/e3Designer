#include "Toolbox.h"
#include "UiTreeViewItemHeaderDefault.h"
#include "TreeViewItemIconHeader.h"
#include "UiListView.h"

Toolbox::Toolbox(e3::Element* pParent)
	: ToolboxBase(pParent)
{
	UiTreeViewItem* pE3Item = new UiTreeViewItem();
	UiTreeViewItemHeaderDefault* pH = new UiTreeViewItemHeaderDefault();
	pE3Item->AddElement(pH);
	pH->SetTitle("Element 3D");
	mTree->AddElement(pE3Item);

	UiTreeViewItem* pElementItem = new UiTreeViewItem();
	TreeViewItemIconHeader* pHE = new TreeViewItemIconHeader();
	pElementItem->AddElement(pHE);
	pHE->SetTitle("Element");
	pHE->SetIconCharcode("eeca");
	//pElementItem->SetText("Element");
	pElementItem->SetAcceptDrag(true);
	pE3Item->AddElement(pElementItem);

	UiTreeViewItem* pTextItem = new UiTreeViewItem();
	TreeViewItemIconHeader* pHT = new TreeViewItemIconHeader();
	pTextItem->AddElement(pHT);
	pHT->SetTitle("Text");
	pHT->SetIconCharcode("e8d2");
	//pTextItem->SetText("Text");
	pTextItem->SetAcceptDrag(true);
	pE3Item->AddElement(pTextItem);
}
