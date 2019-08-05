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
 * OASComDayCqDamCoreImplProcessTextExt
 */
public class OASComDayCqDamCoreImplProcessTextExt {
    /**
     * Get mimeTypes
     * @return mimeTypes
     */
    public OASConfigNodePropertyArray mimeTypes { get; set; }

    /**
     * Get maxExtract
     * @return maxExtract
     */
    public OASConfigNodePropertyInteger maxExtract { get; set; }

    public static OASComDayCqDamCoreImplProcessTextExt getExample() {
        OASComDayCqDamCoreImplProcessTextExt comDayCqDamCoreImplProcessTextExtractionProcessProperties = new OASComDayCqDamCoreImplProcessTextExt();
          comDayCqDamCoreImplProcessTextExtractionProcessProperties.mimeTypes = OASConfigNodePropertyArray.getExample();
          comDayCqDamCoreImplProcessTextExtractionProcessProperties.maxExtract = OASConfigNodePropertyInteger.getExample();
        return comDayCqDamCoreImplProcessTextExtractionProcessProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASComDayCqDamCoreImplProcessTextExt) {           
            OASComDayCqDamCoreImplProcessTextExt comDayCqDamCoreImplProcessTextExtractionProcessProperties = (OASComDayCqDamCoreImplProcessTextExt) obj;
            return this.mimeTypes == comDayCqDamCoreImplProcessTextExtractionProcessProperties.mimeTypes
                && this.maxExtract == comDayCqDamCoreImplProcessTextExtractionProcessProperties.maxExtract;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (mimeTypes == null ? 0 : System.hashCode(mimeTypes));
        hashCode = (17 * hashCode) + (maxExtract == null ? 0 : System.hashCode(maxExtract));
        return hashCode;
    }
}
