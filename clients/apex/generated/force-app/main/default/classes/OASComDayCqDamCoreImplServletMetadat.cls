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
 * OASComDayCqDamCoreImplServletMetadat
 */
public class OASComDayCqDamCoreImplServletMetadat implements OAS.MappedProperties {
    /**
     * Get slingServletResourceTypes
     * @return slingServletResourceTypes
     */
    public OASConfigNodePropertyString slingServletResourceTypes { get; set; }

    /**
     * Get slingServletMethods
     * @return slingServletMethods
     */
    public OASConfigNodePropertyString slingServletMethods { get; set; }

    /**
     * Get slingServletExtensions
     * @return slingServletExtensions
     */
    public OASConfigNodePropertyString slingServletExtensions { get; set; }

    /**
     * Get slingServletSelectors
     * @return slingServletSelectors
     */
    public OASConfigNodePropertyString slingServletSelectors { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'sling.servlet.resourceTypes' => 'slingServletResourceTypes',
        'sling.servlet.methods' => 'slingServletMethods',
        'sling.servlet.extensions' => 'slingServletExtensions',
        'sling.servlet.selectors' => 'slingServletSelectors'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASComDayCqDamCoreImplServletMetadat getExample() {
        OASComDayCqDamCoreImplServletMetadat comDayCqDamCoreImplServletMetadataGetServletProperties = new OASComDayCqDamCoreImplServletMetadat();
          comDayCqDamCoreImplServletMetadataGetServletProperties.slingServletResourceTypes = OASConfigNodePropertyString.getExample();
          comDayCqDamCoreImplServletMetadataGetServletProperties.slingServletMethods = OASConfigNodePropertyString.getExample();
          comDayCqDamCoreImplServletMetadataGetServletProperties.slingServletExtensions = OASConfigNodePropertyString.getExample();
          comDayCqDamCoreImplServletMetadataGetServletProperties.slingServletSelectors = OASConfigNodePropertyString.getExample();
        return comDayCqDamCoreImplServletMetadataGetServletProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASComDayCqDamCoreImplServletMetadat) {           
            OASComDayCqDamCoreImplServletMetadat comDayCqDamCoreImplServletMetadataGetServletProperties = (OASComDayCqDamCoreImplServletMetadat) obj;
            return this.slingServletResourceTypes == comDayCqDamCoreImplServletMetadataGetServletProperties.slingServletResourceTypes
                && this.slingServletMethods == comDayCqDamCoreImplServletMetadataGetServletProperties.slingServletMethods
                && this.slingServletExtensions == comDayCqDamCoreImplServletMetadataGetServletProperties.slingServletExtensions
                && this.slingServletSelectors == comDayCqDamCoreImplServletMetadataGetServletProperties.slingServletSelectors;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (slingServletResourceTypes == null ? 0 : System.hashCode(slingServletResourceTypes));
        hashCode = (17 * hashCode) + (slingServletMethods == null ? 0 : System.hashCode(slingServletMethods));
        hashCode = (17 * hashCode) + (slingServletExtensions == null ? 0 : System.hashCode(slingServletExtensions));
        hashCode = (17 * hashCode) + (slingServletSelectors == null ? 0 : System.hashCode(slingServletSelectors));
        return hashCode;
    }
}
