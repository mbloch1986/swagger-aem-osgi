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
 * OASComAdobeCqSocialScfEndpointsImplD
 */
public class OASComAdobeCqSocialScfEndpointsImplD implements OAS.MappedProperties {
    /**
     * Get slingServletSelectors
     * @return slingServletSelectors
     */
    public OASConfigNodePropertyArray slingServletSelectors { get; set; }

    /**
     * Get slingServletExtensions
     * @return slingServletExtensions
     */
    public OASConfigNodePropertyString slingServletExtensions { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'sling.servlet.selectors' => 'slingServletSelectors',
        'sling.servlet.extensions' => 'slingServletExtensions'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASComAdobeCqSocialScfEndpointsImplD getExample() {
        OASComAdobeCqSocialScfEndpointsImplD comAdobeCqSocialScfEndpointsImplDefaultSocialGetServletProperties = new OASComAdobeCqSocialScfEndpointsImplD();
          comAdobeCqSocialScfEndpointsImplDefaultSocialGetServletProperties.slingServletSelectors = OASConfigNodePropertyArray.getExample();
          comAdobeCqSocialScfEndpointsImplDefaultSocialGetServletProperties.slingServletExtensions = OASConfigNodePropertyString.getExample();
        return comAdobeCqSocialScfEndpointsImplDefaultSocialGetServletProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASComAdobeCqSocialScfEndpointsImplD) {           
            OASComAdobeCqSocialScfEndpointsImplD comAdobeCqSocialScfEndpointsImplDefaultSocialGetServletProperties = (OASComAdobeCqSocialScfEndpointsImplD) obj;
            return this.slingServletSelectors == comAdobeCqSocialScfEndpointsImplDefaultSocialGetServletProperties.slingServletSelectors
                && this.slingServletExtensions == comAdobeCqSocialScfEndpointsImplDefaultSocialGetServletProperties.slingServletExtensions;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (slingServletSelectors == null ? 0 : System.hashCode(slingServletSelectors));
        hashCode = (17 * hashCode) + (slingServletExtensions == null ? 0 : System.hashCode(slingServletExtensions));
        return hashCode;
    }
}
