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
 * OASComDayCqMcmCampaignImporterPerson
 */
public class OASComDayCqMcmCampaignImporterPerson implements OAS.MappedProperties {
    /**
     * Get serviceRanking
     * @return serviceRanking
     */
    public OASConfigNodePropertyInteger serviceRanking { get; set; }

    /**
     * Get tagpattern
     * @return tagpattern
     */
    public OASConfigNodePropertyString tagpattern { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'service.ranking' => 'serviceRanking'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASComDayCqMcmCampaignImporterPerson getExample() {
        OASComDayCqMcmCampaignImporterPerson comDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryProperties = new OASComDayCqMcmCampaignImporterPerson();
          comDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryProperties.serviceRanking = OASConfigNodePropertyInteger.getExample();
          comDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryProperties.tagpattern = OASConfigNodePropertyString.getExample();
        return comDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASComDayCqMcmCampaignImporterPerson) {           
            OASComDayCqMcmCampaignImporterPerson comDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryProperties = (OASComDayCqMcmCampaignImporterPerson) obj;
            return this.serviceRanking == comDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryProperties.serviceRanking
                && this.tagpattern == comDayCqMcmCampaignImporterPersonalizedTextHandlerFactoryProperties.tagpattern;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (serviceRanking == null ? 0 : System.hashCode(serviceRanking));
        hashCode = (17 * hashCode) + (tagpattern == null ? 0 : System.hashCode(tagpattern));
        return hashCode;
    }
}
