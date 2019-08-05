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
 * OASComAdobeGraniteOffloadingImplOffl
 */
public class OASComAdobeGraniteOffloadingImplOffl implements OAS.MappedProperties {
    /**
     * Get offloadingOffloaderEnabled
     * @return offloadingOffloaderEnabled
     */
    public OASConfigNodePropertyBoolean offloadingOffloaderEnabled { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'offloading.offloader.enabled' => 'offloadingOffloaderEnabled'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASComAdobeGraniteOffloadingImplOffl getExample() {
        OASComAdobeGraniteOffloadingImplOffl comAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties = new OASComAdobeGraniteOffloadingImplOffl();
          comAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties.offloadingOffloaderEnabled = OASConfigNodePropertyBoolean.getExample();
        return comAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASComAdobeGraniteOffloadingImplOffl) {           
            OASComAdobeGraniteOffloadingImplOffl comAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties = (OASComAdobeGraniteOffloadingImplOffl) obj;
            return this.offloadingOffloaderEnabled == comAdobeGraniteOffloadingImplOffloadingJobOffloaderProperties.offloadingOffloaderEnabled;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (offloadingOffloaderEnabled == null ? 0 : System.hashCode(offloadingOffloaderEnabled));
        return hashCode;
    }
}
