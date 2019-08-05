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
 * OASComDayCqWcmCoreWCMRequestFilterPr
 */
public class OASComDayCqWcmCoreWCMRequestFilterPr implements OAS.MappedProperties {
    /**
     * Get wcmfilterMode
     * @return wcmfilterMode
     */
    public OASConfigNodePropertyDropDown wcmfilterMode { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'wcmfilter.mode' => 'wcmfilterMode'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASComDayCqWcmCoreWCMRequestFilterPr getExample() {
        OASComDayCqWcmCoreWCMRequestFilterPr comDayCqWcmCoreWCMRequestFilterProperties = new OASComDayCqWcmCoreWCMRequestFilterPr();
          comDayCqWcmCoreWCMRequestFilterProperties.wcmfilterMode = OASConfigNodePropertyDropDown.getExample();
        return comDayCqWcmCoreWCMRequestFilterProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASComDayCqWcmCoreWCMRequestFilterPr) {           
            OASComDayCqWcmCoreWCMRequestFilterPr comDayCqWcmCoreWCMRequestFilterProperties = (OASComDayCqWcmCoreWCMRequestFilterPr) obj;
            return this.wcmfilterMode == comDayCqWcmCoreWCMRequestFilterProperties.wcmfilterMode;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (wcmfilterMode == null ? 0 : System.hashCode(wcmfilterMode));
        return hashCode;
    }
}
