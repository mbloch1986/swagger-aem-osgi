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
 * OASComAdobeGraniteOptoutImplOptOutSe
 */
public class OASComAdobeGraniteOptoutImplOptOutSe implements OAS.MappedProperties {
    /**
     * Get optoutCookies
     * @return optoutCookies
     */
    public OASConfigNodePropertyArray optoutCookies { get; set; }

    /**
     * Get optoutHeaders
     * @return optoutHeaders
     */
    public OASConfigNodePropertyArray optoutHeaders { get; set; }

    /**
     * Get optoutWhitelistCookies
     * @return optoutWhitelistCookies
     */
    public OASConfigNodePropertyArray optoutWhitelistCookies { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'optout.cookies' => 'optoutCookies',
        'optout.headers' => 'optoutHeaders',
        'optout.whitelist.cookies' => 'optoutWhitelistCookies'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASComAdobeGraniteOptoutImplOptOutSe getExample() {
        OASComAdobeGraniteOptoutImplOptOutSe comAdobeGraniteOptoutImplOptOutServiceImplProperties = new OASComAdobeGraniteOptoutImplOptOutSe();
          comAdobeGraniteOptoutImplOptOutServiceImplProperties.optoutCookies = OASConfigNodePropertyArray.getExample();
          comAdobeGraniteOptoutImplOptOutServiceImplProperties.optoutHeaders = OASConfigNodePropertyArray.getExample();
          comAdobeGraniteOptoutImplOptOutServiceImplProperties.optoutWhitelistCookies = OASConfigNodePropertyArray.getExample();
        return comAdobeGraniteOptoutImplOptOutServiceImplProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASComAdobeGraniteOptoutImplOptOutSe) {           
            OASComAdobeGraniteOptoutImplOptOutSe comAdobeGraniteOptoutImplOptOutServiceImplProperties = (OASComAdobeGraniteOptoutImplOptOutSe) obj;
            return this.optoutCookies == comAdobeGraniteOptoutImplOptOutServiceImplProperties.optoutCookies
                && this.optoutHeaders == comAdobeGraniteOptoutImplOptOutServiceImplProperties.optoutHeaders
                && this.optoutWhitelistCookies == comAdobeGraniteOptoutImplOptOutServiceImplProperties.optoutWhitelistCookies;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (optoutCookies == null ? 0 : System.hashCode(optoutCookies));
        hashCode = (17 * hashCode) + (optoutHeaders == null ? 0 : System.hashCode(optoutHeaders));
        hashCode = (17 * hashCode) + (optoutWhitelistCookies == null ? 0 : System.hashCode(optoutWhitelistCookies));
        return hashCode;
    }
}
