#include "Workspace.h"

Workspace::Workspace(e3::Element* pParent)
	: WorkspaceBase(pParent)
{
	SetAcceptDrop(true);
}

void Workspace::OnDrop(e3::DragEvent* pEvent)
{
	printf("asdf");

	e3::Element* pE = new e3::Element();
	pE->SetWidth(200);
	pE->SetHeight(30);
	pE->SetBackgroundColor(glm::vec4(255, 0, 0, 255));
	AddElement(pE);

	pE->SetOnClickCallback([this, pE](e3::MouseEvent*) {
		auto geo = GetGeometry();
		auto egeo = pE->GetGeometry();
		mSelectionItem->SetWidth(egeo.width + 10);
		mSelectionItem->SetHeight(egeo.height + 10);
		mSelectionItem->SetTranslation(glm::vec3(egeo.x - geo.x - 5, egeo.y - geo.y - 5, 0));

		mProperties->SetElement(pE);
	});
}