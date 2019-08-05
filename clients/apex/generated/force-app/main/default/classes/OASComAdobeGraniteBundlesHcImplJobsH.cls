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
 * OASComAdobeGraniteBundlesHcImplJobsH
 */
public class OASComAdobeGraniteBundlesHcImplJobsH implements OAS.MappedProperties {
    /**
     * Get hcTags
     * @return hcTags
     */
    public OASConfigNodePropertyArray hcTags { get; set; }

    /**
     * Get maxQueuedJobs
     * @return maxQueuedJobs
     */
    public OASConfigNodePropertyInteger maxQueuedJobs { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'hc.tags' => 'hcTags',
        'max.queued.jobs' => 'maxQueuedJobs'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASComAdobeGraniteBundlesHcImplJobsH getExample() {
        OASComAdobeGraniteBundlesHcImplJobsH comAdobeGraniteBundlesHcImplJobsHealthCheckProperties = new OASComAdobeGraniteBundlesHcImplJobsH();
          comAdobeGraniteBundlesHcImplJobsHealthCheckProperties.hcTags = OASConfigNodePropertyArray.getExample();
          comAdobeGraniteBundlesHcImplJobsHealthCheckProperties.maxQueuedJobs = OASConfigNodePropertyInteger.getExample();
        return comAdobeGraniteBundlesHcImplJobsHealthCheckProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASComAdobeGraniteBundlesHcImplJobsH) {           
            OASComAdobeGraniteBundlesHcImplJobsH comAdobeGraniteBundlesHcImplJobsHealthCheckProperties = (OASComAdobeGraniteBundlesHcImplJobsH) obj;
            return this.hcTags == comAdobeGraniteBundlesHcImplJobsHealthCheckProperties.hcTags
                && this.maxQueuedJobs == comAdobeGraniteBundlesHcImplJobsHealthCheckProperties.maxQueuedJobs;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (hcTags == null ? 0 : System.hashCode(hcTags));
        hashCode = (17 * hashCode) + (maxQueuedJobs == null ? 0 : System.hashCode(maxQueuedJobs));
        return hashCode;
    }
}
