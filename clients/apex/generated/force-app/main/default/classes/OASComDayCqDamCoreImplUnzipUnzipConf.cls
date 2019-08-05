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
 * OASComDayCqDamCoreImplUnzipUnzipConf
 */
public class OASComDayCqDamCoreImplUnzipUnzipConf implements OAS.MappedProperties {
    /**
     * Get cqDamConfigUnzipMaxuncompressedsize
     * @return cqDamConfigUnzipMaxuncompressedsize
     */
    public OASConfigNodePropertyInteger cqDamConfigUnzipMaxuncompressedsize { get; set; }

    /**
     * Get cqDamConfigUnzipEncoding
     * @return cqDamConfigUnzipEncoding
     */
    public OASConfigNodePropertyString cqDamConfigUnzipEncoding { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'cq.dam.config.unzip.maxuncompressedsize' => 'cqDamConfigUnzipMaxuncompressedsize',
        'cq.dam.config.unzip.encoding' => 'cqDamConfigUnzipEncoding'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASComDayCqDamCoreImplUnzipUnzipConf getExample() {
        OASComDayCqDamCoreImplUnzipUnzipConf comDayCqDamCoreImplUnzipUnzipConfigProperties = new OASComDayCqDamCoreImplUnzipUnzipConf();
          comDayCqDamCoreImplUnzipUnzipConfigProperties.cqDamConfigUnzipMaxuncompressedsize = OASConfigNodePropertyInteger.getExample();
          comDayCqDamCoreImplUnzipUnzipConfigProperties.cqDamConfigUnzipEncoding = OASConfigNodePropertyString.getExample();
        return comDayCqDamCoreImplUnzipUnzipConfigProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASComDayCqDamCoreImplUnzipUnzipConf) {           
            OASComDayCqDamCoreImplUnzipUnzipConf comDayCqDamCoreImplUnzipUnzipConfigProperties = (OASComDayCqDamCoreImplUnzipUnzipConf) obj;
            return this.cqDamConfigUnzipMaxuncompressedsize == comDayCqDamCoreImplUnzipUnzipConfigProperties.cqDamConfigUnzipMaxuncompressedsize
                && this.cqDamConfigUnzipEncoding == comDayCqDamCoreImplUnzipUnzipConfigProperties.cqDamConfigUnzipEncoding;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (cqDamConfigUnzipMaxuncompressedsize == null ? 0 : System.hashCode(cqDamConfigUnzipMaxuncompressedsize));
        hashCode = (17 * hashCode) + (cqDamConfigUnzipEncoding == null ? 0 : System.hashCode(cqDamConfigUnzipEncoding));
        return hashCode;
    }
}
