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
 * OASComDayCqReplicationImplTransportH
 */
public class OASComDayCqReplicationImplTransportH implements OAS.MappedProperties {
    /**
     * Get disabledCipherSuites
     * @return disabledCipherSuites
     */
    public OASConfigNodePropertyArray disabledCipherSuites { get; set; }

    /**
     * Get enabledCipherSuites
     * @return enabledCipherSuites
     */
    public OASConfigNodePropertyArray enabledCipherSuites { get; set; }

    private static final Map<String, String> propertyMappings = new Map<String, String>{
        'disabled.cipher.suites' => 'disabledCipherSuites',
        'enabled.cipher.suites' => 'enabledCipherSuites'
    };

    public Map<String, String> getPropertyMappings() {
        return propertyMappings;
    }

    public static OASComDayCqReplicationImplTransportH getExample() {
        OASComDayCqReplicationImplTransportH comDayCqReplicationImplTransportHttpProperties = new OASComDayCqReplicationImplTransportH();
          comDayCqReplicationImplTransportHttpProperties.disabledCipherSuites = OASConfigNodePropertyArray.getExample();
          comDayCqReplicationImplTransportHttpProperties.enabledCipherSuites = OASConfigNodePropertyArray.getExample();
        return comDayCqReplicationImplTransportHttpProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASComDayCqReplicationImplTransportH) {           
            OASComDayCqReplicationImplTransportH comDayCqReplicationImplTransportHttpProperties = (OASComDayCqReplicationImplTransportH) obj;
            return this.disabledCipherSuites == comDayCqReplicationImplTransportHttpProperties.disabledCipherSuites
                && this.enabledCipherSuites == comDayCqReplicationImplTransportHttpProperties.enabledCipherSuites;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (disabledCipherSuites == null ? 0 : System.hashCode(disabledCipherSuites));
        hashCode = (17 * hashCode) + (enabledCipherSuites == null ? 0 : System.hashCode(enabledCipherSuites));
        return hashCode;
    }
}
