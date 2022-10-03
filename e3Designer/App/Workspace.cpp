#include "Workspace.h"

Workspace::Workspace(e3::Element* pParent)
	: WorkspaceBase(pParent)
{
	SetAcceptDrop(true);

	SetOnClickCallback([this](e3::MouseEvent*) {
		UpdateSelection(this);
		mProperties->SetElement(this);
	});
}

void Workspace::OnDrop(e3::DragEvent* pEvent)
{
	printf("asdf");

	e3::Element* pE = new e3::Element();
	pE->SetWidth(200);
	pE->SetHeight(30);
	pE->SetMargin("10dp");
	pE->SetBackgroundColor(glm::vec4(255, 0, 0, 255));

	bool added = false;
	for (int i = 0; i < GetNumChildren() - 1; ++i)
	{
		e3::Element* pChild = GetChildren()[i];
		if (pChild->GetGeometry().contains(glm::vec2(pEvent->GetX(), pEvent->GetY())))
		{
			pChild->AddElement(pE);
			added = true;
			break;
		}
	}

	if (!added) InsertElement(GetNumChildren() - 1, pE);
	UpdateSelection(pE);

	pE->SetOnClickCallback([this, pE](e3::MouseEvent* e) {
		e->Stop();
		UpdateSelection(pE);
		mProperties->SetElement(pE);
	});
}

void Workspace::UpdateSelection(e3::Element* pElement)
{
		auto geo = GetGeometry();
		auto egeo = pElement->GetGeometry();
		mSelectionItem->SetWidth(egeo.width + 10);
		mSelectionItem->SetHeight(egeo.height + 10);
		mSelectionItem->SetTranslation(glm::vec3(egeo.x - geo.x - 5, egeo.y - geo.y - 5, 0));
}