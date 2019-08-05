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
 * OASComAdobeCqSocialDatastoreOpImplSo
 */
public class OASComAdobeCqSocialDatastoreOpImplSo implements OAS.MappedProperties {
    /**
     * Get solrZkTimeout
     * @return solrZkTimeout
     */
    public OASConfigNodePropertyString solrZkTimeout { get; set; }

    /**
     * Get solrCommit
     * @return solrCommit
     */
    public OASConfigNodePropertyString solrCommit { get; set; }

    /**
     * Get cacheOn
     * @return cacheOn
     */
    public OASConfigNodePropertyBoolean cacheOn { get; set; }

    /**
     * Get concurrencyLevel
     * @return concurrencyLevel
     */
    public OASConfigNodePropertyInteger concurrencyLevel { get; set; }

    /**
     * Get cacheStartSize
     * @return cacheStartSize
     */
    public OASConfigNodePropertyInteger cacheStartSize { get; set; }

    /**
     * Get cacheTtl
     * @return cacheTtl
     */
    public OASConfigNodePropertyInteger cacheTtl { get; set; }

    /**
     * Get cacheSize
     * @return cacheSize
     */
    public OASConfigNodePropertyInteger cacheSize { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'solr.zk.timeout' => 'solrZkTimeout',
        'solr.commit' => 'solrCommit',
        'cache.on' => 'cacheOn',
        'concurrency.level' => 'concurrencyLevel',
        'cache.start.size' => 'cacheStartSize',
        'cache.ttl' => 'cacheTtl',
        'cache.size' => 'cacheSize'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASComAdobeCqSocialDatastoreOpImplSo getExample() {
        OASComAdobeCqSocialDatastoreOpImplSo comAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties = new OASComAdobeCqSocialDatastoreOpImplSo();
          comAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties.solrZkTimeout = OASConfigNodePropertyString.getExample();
          comAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties.solrCommit = OASConfigNodePropertyString.getExample();
          comAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties.cacheOn = OASConfigNodePropertyBoolean.getExample();
          comAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties.concurrencyLevel = OASConfigNodePropertyInteger.getExample();
          comAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties.cacheStartSize = OASConfigNodePropertyInteger.getExample();
          comAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties.cacheTtl = OASConfigNodePropertyInteger.getExample();
          comAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties.cacheSize = OASConfigNodePropertyInteger.getExample();
        return comAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASComAdobeCqSocialDatastoreOpImplSo) {           
            OASComAdobeCqSocialDatastoreOpImplSo comAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties = (OASComAdobeCqSocialDatastoreOpImplSo) obj;
            return this.solrZkTimeout == comAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties.solrZkTimeout
                && this.solrCommit == comAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties.solrCommit
                && this.cacheOn == comAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties.cacheOn
                && this.concurrencyLevel == comAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties.concurrencyLevel
                && this.cacheStartSize == comAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties.cacheStartSize
                && this.cacheTtl == comAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties.cacheTtl
                && this.cacheSize == comAdobeCqSocialDatastoreOpImplSocialMSResourceProviderFactoryProperties.cacheSize;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (solrZkTimeout == null ? 0 : System.hashCode(solrZkTimeout));
        hashCode = (17 * hashCode) + (solrCommit == null ? 0 : System.hashCode(solrCommit));
        hashCode = (17 * hashCode) + (cacheOn == null ? 0 : System.hashCode(cacheOn));
        hashCode = (17 * hashCode) + (concurrencyLevel == null ? 0 : System.hashCode(concurrencyLevel));
        hashCode = (17 * hashCode) + (cacheStartSize == null ? 0 : System.hashCode(cacheStartSize));
        hashCode = (17 * hashCode) + (cacheTtl == null ? 0 : System.hashCode(cacheTtl));
        hashCode = (17 * hashCode) + (cacheSize == null ? 0 : System.hashCode(cacheSize));
        return hashCode;
    }
}
