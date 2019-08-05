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
 * OASComAdobeCqExperiencelogImplExperi
 */
public class OASComAdobeCqExperiencelogImplExperi {
    /**
     * Get enabled
     * @return enabled
     */
    public OASConfigNodePropertyBoolean enabled { get; set; }

    /**
     * Get disabledForGroups
     * @return disabledForGroups
     */
    public OASConfigNodePropertyArray disabledForGroups { get; set; }

    public static OASComAdobeCqExperiencelogImplExperi getExample() {
        OASComAdobeCqExperiencelogImplExperi comAdobeCqExperiencelogImplExperienceLogConfigServletProperties = new OASComAdobeCqExperiencelogImplExperi();
          comAdobeCqExperiencelogImplExperienceLogConfigServletProperties.enabled = OASConfigNodePropertyBoolean.getExample();
          comAdobeCqExperiencelogImplExperienceLogConfigServletProperties.disabledForGroups = OASConfigNodePropertyArray.getExample();
        return comAdobeCqExperiencelogImplExperienceLogConfigServletProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASComAdobeCqExperiencelogImplExperi) {           
            OASComAdobeCqExperiencelogImplExperi comAdobeCqExperiencelogImplExperienceLogConfigServletProperties = (OASComAdobeCqExperiencelogImplExperi) obj;
            return this.enabled == comAdobeCqExperiencelogImplExperienceLogConfigServletProperties.enabled
                && this.disabledForGroups == comAdobeCqExperiencelogImplExperienceLogConfigServletProperties.disabledForGroups;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (enabled == null ? 0 : System.hashCode(enabled));
        hashCode = (17 * hashCode) + (disabledForGroups == null ? 0 : System.hashCode(disabledForGroups));
        return hashCode;
    }
}
