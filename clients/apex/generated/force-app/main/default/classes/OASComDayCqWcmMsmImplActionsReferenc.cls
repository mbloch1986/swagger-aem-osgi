/*
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by the OAS code generator program.
 * https://github.com/OAS-api/OAS-codegen.git
 * Do not edit the class manually.
 */

/**
 * OASComDayCqWcmMsmImplActionsReferenc
 */
public class OASComDayCqWcmMsmImplActionsReferenc implements OAS.MappedProperties {
    /**
     * Get cqWcmMsmActionExcludednodetypes
     * @return cqWcmMsmActionExcludednodetypes
     */
    public OASConfigNodePropertyArray cqWcmMsmActionExcludednodetypes { get; set; }

    /**
     * Get cqWcmMsmActionExcludedparagraphitems
     * @return cqWcmMsmActionExcludedparagraphitems
     */
    public OASConfigNodePropertyArray cqWcmMsmActionExcludedparagraphitems { get; set; }

    /**
     * Get cqWcmMsmActionExcludedprops
     * @return cqWcmMsmActionExcludedprops
     */
    public OASConfigNodePropertyArray cqWcmMsmActionExcludedprops { get; set; }

    /**
     * Get cqWcmMsmImplActionReferencesupdatePropUpdateNested
     * @return cqWcmMsmImplActionReferencesupdatePropUpdateNested
     */
    public OASConfigNodePropertyBoolean cqWcmMsmImplActionReferencesupdatePropUpdateNested { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'cq.wcm.msm.action.excludednodetypes' => 'cqWcmMsmActionExcludednodetypes',
        'cq.wcm.msm.action.excludedparagraphitems' => 'cqWcmMsmActionExcludedparagraphitems',
        'cq.wcm.msm.action.excludedprops' => 'cqWcmMsmActionExcludedprops',
        'cq.wcm.msm.impl.action.referencesupdate.prop_updateNested' => 'cqWcmMsmImplActionReferencesupdatePropUpdateNested'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASComDayCqWcmMsmImplActionsReferenc getExample() {
        OASComDayCqWcmMsmImplActionsReferenc comDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties = new OASComDayCqWcmMsmImplActionsReferenc();
          comDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties.cqWcmMsmActionExcludednodetypes = OASConfigNodePropertyArray.getExample();
          comDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties.cqWcmMsmActionExcludedparagraphitems = OASConfigNodePropertyArray.getExample();
          comDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties.cqWcmMsmActionExcludedprops = OASConfigNodePropertyArray.getExample();
          comDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties.cqWcmMsmImplActionReferencesupdatePropUpdateNested = OASConfigNodePropertyBoolean.getExample();
        return comDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASComDayCqWcmMsmImplActionsReferenc) {           
            OASComDayCqWcmMsmImplActionsReferenc comDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties = (OASComDayCqWcmMsmImplActionsReferenc) obj;
            return this.cqWcmMsmActionExcludednodetypes == comDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties.cqWcmMsmActionExcludednodetypes
                && this.cqWcmMsmActionExcludedparagraphitems == comDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties.cqWcmMsmActionExcludedparagraphitems
                && this.cqWcmMsmActionExcludedprops == comDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties.cqWcmMsmActionExcludedprops
                && this.cqWcmMsmImplActionReferencesupdatePropUpdateNested == comDayCqWcmMsmImplActionsReferencesUpdateActionFactoryProperties.cqWcmMsmImplActionReferencesupdatePropUpdateNested;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (cqWcmMsmActionExcludednodetypes == null ? 0 : System.hashCode(cqWcmMsmActionExcludednodetypes));
        hashCode = (17 * hashCode) + (cqWcmMsmActionExcludedparagraphitems == null ? 0 : System.hashCode(cqWcmMsmActionExcludedparagraphitems));
        hashCode = (17 * hashCode) + (cqWcmMsmActionExcludedprops == null ? 0 : System.hashCode(cqWcmMsmActionExcludedprops));
        hashCode = (17 * hashCode) + (cqWcmMsmImplActionReferencesupdatePropUpdateNested == null ? 0 : System.hashCode(cqWcmMsmImplActionReferencesupdatePropUpdateNested));
        return hashCode;
    }
}
