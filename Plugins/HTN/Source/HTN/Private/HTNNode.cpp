#include "HTNNode.h"

UHTNNode::UHTNNode() {
    this->TemplateNode = NULL;
    this->HTNAsset = NULL;
    this->OwnerComponent = NULL;
}

UHTNNode* UHTNNode::GetTemplateNode() const {
    return NULL;
}

FString UHTNNode::GetStaticDescription() const {
    return TEXT("");
}

FString UHTNNode::GetShortDescription() const {
    return TEXT("");
}

UHTNComponent* UHTNNode::GetOwnerComponent() const {
    return NULL;
}

FString UHTNNode::GetNodeName() const {
    return TEXT("");
}


