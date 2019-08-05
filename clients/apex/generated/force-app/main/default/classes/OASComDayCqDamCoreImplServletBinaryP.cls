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
 * OASComDayCqDamCoreImplServletBinaryP
 */
public class OASComDayCqDamCoreImplServletBinaryP implements OAS.MappedProperties {
    /**
     * Get slingServletResourceTypes
     * @return slingServletResourceTypes
     */
    public OASConfigNodePropertyArray slingServletResourceTypes { get; set; }

    /**
     * Get slingServletMethods
     * @return slingServletMethods
     */
    public OASConfigNodePropertyArray slingServletMethods { get; set; }

    /**
     * Get cqDamDrmEnable
     * @return cqDamDrmEnable
     */
    public OASConfigNodePropertyBoolean cqDamDrmEnable { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'sling.servlet.resourceTypes' => 'slingServletResourceTypes',
        'sling.servlet.methods' => 'slingServletMethods',
        'cq.dam.drm.enable' => 'cqDamDrmEnable'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASComDayCqDamCoreImplServletBinaryP getExample() {
        OASComDayCqDamCoreImplServletBinaryP comDayCqDamCoreImplServletBinaryProviderServletProperties = new OASComDayCqDamCoreImplServletBinaryP();
          comDayCqDamCoreImplServletBinaryProviderServletProperties.slingServletResourceTypes = OASConfigNodePropertyArray.getExample();
          comDayCqDamCoreImplServletBinaryProviderServletProperties.slingServletMethods = OASConfigNodePropertyArray.getExample();
          comDayCqDamCoreImplServletBinaryProviderServletProperties.cqDamDrmEnable = OASConfigNodePropertyBoolean.getExample();
        return comDayCqDamCoreImplServletBinaryProviderServletProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASComDayCqDamCoreImplServletBinaryP) {           
            OASComDayCqDamCoreImplServletBinaryP comDayCqDamCoreImplServletBinaryProviderServletProperties = (OASComDayCqDamCoreImplServletBinaryP) obj;
            return this.slingServletResourceTypes == comDayCqDamCoreImplServletBinaryProviderServletProperties.slingServletResourceTypes
                && this.slingServletMethods == comDayCqDamCoreImplServletBinaryProviderServletProperties.slingServletMethods
                && this.cqDamDrmEnable == comDayCqDamCoreImplServletBinaryProviderServletProperties.cqDamDrmEnable;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (slingServletResourceTypes == null ? 0 : System.hashCode(slingServletResourceTypes));
        hashCode = (17 * hashCode) + (slingServletMethods == null ? 0 : System.hashCode(slingServletMethods));
        hashCode = (17 * hashCode) + (cqDamDrmEnable == null ? 0 : System.hashCode(cqDamDrmEnable));
        return hashCode;
    }
}
