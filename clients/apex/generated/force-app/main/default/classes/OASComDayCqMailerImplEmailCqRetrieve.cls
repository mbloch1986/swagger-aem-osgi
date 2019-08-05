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
 * OASComDayCqMailerImplEmailCqRetrieve
 */
public class OASComDayCqMailerImplEmailCqRetrieve implements OAS.MappedProperties {
    /**
     * Get mailerEmailEmbed
     * @return mailerEmailEmbed
     */
    public OASConfigNodePropertyBoolean mailerEmailEmbed { get; set; }

    /**
     * Get mailerEmailCharset
     * @return mailerEmailCharset
     */
    public OASConfigNodePropertyString mailerEmailCharset { get; set; }

    /**
     * Get mailerEmailRetrieverUserID
     * @return mailerEmailRetrieverUserID
     */
    public OASConfigNodePropertyString mailerEmailRetrieverUserID { get; set; }

    /**
     * Get mailerEmailRetrieverUserPWD
     * @return mailerEmailRetrieverUserPWD
     */
    public OASConfigNodePropertyString mailerEmailRetrieverUserPWD { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'mailer.email.embed' => 'mailerEmailEmbed',
        'mailer.email.charset' => 'mailerEmailCharset',
        'mailer.email.retrieverUserID' => 'mailerEmailRetrieverUserID',
        'mailer.email.retrieverUserPWD' => 'mailerEmailRetrieverUserPWD'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASComDayCqMailerImplEmailCqRetrieve getExample() {
        OASComDayCqMailerImplEmailCqRetrieve comDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties = new OASComDayCqMailerImplEmailCqRetrieve();
          comDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.mailerEmailEmbed = OASConfigNodePropertyBoolean.getExample();
          comDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.mailerEmailCharset = OASConfigNodePropertyString.getExample();
          comDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.mailerEmailRetrieverUserID = OASConfigNodePropertyString.getExample();
          comDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.mailerEmailRetrieverUserPWD = OASConfigNodePropertyString.getExample();
        return comDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASComDayCqMailerImplEmailCqRetrieve) {           
            OASComDayCqMailerImplEmailCqRetrieve comDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties = (OASComDayCqMailerImplEmailCqRetrieve) obj;
            return this.mailerEmailEmbed == comDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.mailerEmailEmbed
                && this.mailerEmailCharset == comDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.mailerEmailCharset
                && this.mailerEmailRetrieverUserID == comDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.mailerEmailRetrieverUserID
                && this.mailerEmailRetrieverUserPWD == comDayCqMailerImplEmailCqRetrieverTemplateFactoryProperties.mailerEmailRetrieverUserPWD;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (mailerEmailEmbed == null ? 0 : System.hashCode(mailerEmailEmbed));
        hashCode = (17 * hashCode) + (mailerEmailCharset == null ? 0 : System.hashCode(mailerEmailCharset));
        hashCode = (17 * hashCode) + (mailerEmailRetrieverUserID == null ? 0 : System.hashCode(mailerEmailRetrieverUserID));
        hashCode = (17 * hashCode) + (mailerEmailRetrieverUserPWD == null ? 0 : System.hashCode(mailerEmailRetrieverUserPWD));
        return hashCode;
    }
}
