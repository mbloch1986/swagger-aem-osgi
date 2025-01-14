/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

/*
 * OAIComDayCqWcmMsmImplActionsContentCopyActionFactoryProperties.h
 *
 * 
 */

#ifndef OAIComDayCqWcmMsmImplActionsContentCopyActionFactoryProperties_H_
#define OAIComDayCqWcmMsmImplActionsContentCopyActionFactoryProperties_H_

#include <QJsonObject>


#include "OAIOAIConfigNodePropertyArray.h"
#include "OAIOAIConfigNodePropertyDropDown.h"

#include "OAIObject.h"

namespace OpenAPI {

class OAIComDayCqWcmMsmImplActionsContentCopyActionFactoryProperties: public OAIObject {
public:
    OAIComDayCqWcmMsmImplActionsContentCopyActionFactoryProperties();
    OAIComDayCqWcmMsmImplActionsContentCopyActionFactoryProperties(QString json);
    ~OAIComDayCqWcmMsmImplActionsContentCopyActionFactoryProperties();
    void init();
    void cleanup();

    QString asJson () override;
    QJsonObject asJsonObject() override;
    void fromJsonObject(QJsonObject json) override;
    OAIComDayCqWcmMsmImplActionsContentCopyActionFactoryProperties* fromJson(QString jsonString) override;

    OAIConfigNodePropertyArray* getCqWcmMsmActionExcludednodetypes();
    void setCqWcmMsmActionExcludednodetypes(OAIConfigNodePropertyArray* cq_wcm_msm_action_excludednodetypes);

    OAIConfigNodePropertyArray* getCqWcmMsmActionExcludedparagraphitems();
    void setCqWcmMsmActionExcludedparagraphitems(OAIConfigNodePropertyArray* cq_wcm_msm_action_excludedparagraphitems);

    OAIConfigNodePropertyArray* getCqWcmMsmActionExcludedprops();
    void setCqWcmMsmActionExcludedprops(OAIConfigNodePropertyArray* cq_wcm_msm_action_excludedprops);

    OAIConfigNodePropertyDropDown* getContentcopyactionOrderStyle();
    void setContentcopyactionOrderStyle(OAIConfigNodePropertyDropDown* contentcopyaction_order_style);


    virtual bool isSet() override;

private:
    OAIConfigNodePropertyArray* cq_wcm_msm_action_excludednodetypes;
    bool m_cq_wcm_msm_action_excludednodetypes_isSet;

    OAIConfigNodePropertyArray* cq_wcm_msm_action_excludedparagraphitems;
    bool m_cq_wcm_msm_action_excludedparagraphitems_isSet;

    OAIConfigNodePropertyArray* cq_wcm_msm_action_excludedprops;
    bool m_cq_wcm_msm_action_excludedprops_isSet;

    OAIConfigNodePropertyDropDown* contentcopyaction_order_style;
    bool m_contentcopyaction_order_style_isSet;

};

}

#endif /* OAIComDayCqWcmMsmImplActionsContentCopyActionFactoryProperties_H_ */
