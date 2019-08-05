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
 * OASComDayCqDamS7damCommonPostServlet
 */
public class OASComDayCqDamS7damCommonPostServlet implements OAS.MappedProperties {
    /**
     * Get slingPostOperation
     * @return slingPostOperation
     */
    public OASConfigNodePropertyString slingPostOperation { get; set; }

    /**
     * Get slingServletMethods
     * @return slingServletMethods
     */
    public OASConfigNodePropertyString slingServletMethods { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'sling.post.operation' => 'slingPostOperation',
        'sling.servlet.methods' => 'slingServletMethods'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASComDayCqDamS7damCommonPostServlet getExample() {
        OASComDayCqDamS7damCommonPostServlet comDayCqDamS7damCommonPostServletsSetModifyHandlerProperties = new OASComDayCqDamS7damCommonPostServlet();
          comDayCqDamS7damCommonPostServletsSetModifyHandlerProperties.slingPostOperation = OASConfigNodePropertyString.getExample();
          comDayCqDamS7damCommonPostServletsSetModifyHandlerProperties.slingServletMethods = OASConfigNodePropertyString.getExample();
        return comDayCqDamS7damCommonPostServletsSetModifyHandlerProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASComDayCqDamS7damCommonPostServlet) {           
            OASComDayCqDamS7damCommonPostServlet comDayCqDamS7damCommonPostServletsSetModifyHandlerProperties = (OASComDayCqDamS7damCommonPostServlet) obj;
            return this.slingPostOperation == comDayCqDamS7damCommonPostServletsSetModifyHandlerProperties.slingPostOperation
                && this.slingServletMethods == comDayCqDamS7damCommonPostServletsSetModifyHandlerProperties.slingServletMethods;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (slingPostOperation == null ? 0 : System.hashCode(slingPostOperation));
        hashCode = (17 * hashCode) + (slingServletMethods == null ? 0 : System.hashCode(slingServletMethods));
        return hashCode;
    }
}
