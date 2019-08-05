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
 * OASComDayCqDamHandlerStandardPsdPsdH
 */
public class OASComDayCqDamHandlerStandardPsdPsdH implements OAS.MappedProperties {
    /**
     * Get largeFileThreshold
     * @return largeFileThreshold
     */
    public OASConfigNodePropertyInteger largeFileThreshold { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'large_file_threshold' => 'largeFileThreshold'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASComDayCqDamHandlerStandardPsdPsdH getExample() {
        OASComDayCqDamHandlerStandardPsdPsdH comDayCqDamHandlerStandardPsdPsdHandlerProperties = new OASComDayCqDamHandlerStandardPsdPsdH();
          comDayCqDamHandlerStandardPsdPsdHandlerProperties.largeFileThreshold = OASConfigNodePropertyInteger.getExample();
        return comDayCqDamHandlerStandardPsdPsdHandlerProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASComDayCqDamHandlerStandardPsdPsdH) {           
            OASComDayCqDamHandlerStandardPsdPsdH comDayCqDamHandlerStandardPsdPsdHandlerProperties = (OASComDayCqDamHandlerStandardPsdPsdH) obj;
            return this.largeFileThreshold == comDayCqDamHandlerStandardPsdPsdHandlerProperties.largeFileThreshold;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (largeFileThreshold == null ? 0 : System.hashCode(largeFileThreshold));
        return hashCode;
    }
}
