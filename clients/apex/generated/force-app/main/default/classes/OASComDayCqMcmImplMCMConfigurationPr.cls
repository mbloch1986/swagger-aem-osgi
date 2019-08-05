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
 * OASComDayCqMcmImplMCMConfigurationPr
 */
public class OASComDayCqMcmImplMCMConfigurationPr implements OAS.MappedProperties {
    /**
     * Get experienceIndirection
     * @return experienceIndirection
     */
    public OASConfigNodePropertyArray experienceIndirection { get; set; }

    /**
     * Get touchpointIndirection
     * @return touchpointIndirection
     */
    public OASConfigNodePropertyArray touchpointIndirection { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'experience.indirection' => 'experienceIndirection',
        'touchpoint.indirection' => 'touchpointIndirection'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASComDayCqMcmImplMCMConfigurationPr getExample() {
        OASComDayCqMcmImplMCMConfigurationPr comDayCqMcmImplMCMConfigurationProperties = new OASComDayCqMcmImplMCMConfigurationPr();
          comDayCqMcmImplMCMConfigurationProperties.experienceIndirection = OASConfigNodePropertyArray.getExample();
          comDayCqMcmImplMCMConfigurationProperties.touchpointIndirection = OASConfigNodePropertyArray.getExample();
        return comDayCqMcmImplMCMConfigurationProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASComDayCqMcmImplMCMConfigurationPr) {           
            OASComDayCqMcmImplMCMConfigurationPr comDayCqMcmImplMCMConfigurationProperties = (OASComDayCqMcmImplMCMConfigurationPr) obj;
            return this.experienceIndirection == comDayCqMcmImplMCMConfigurationProperties.experienceIndirection
                && this.touchpointIndirection == comDayCqMcmImplMCMConfigurationProperties.touchpointIndirection;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (experienceIndirection == null ? 0 : System.hashCode(experienceIndirection));
        hashCode = (17 * hashCode) + (touchpointIndirection == null ? 0 : System.hashCode(touchpointIndirection));
        return hashCode;
    }
}
