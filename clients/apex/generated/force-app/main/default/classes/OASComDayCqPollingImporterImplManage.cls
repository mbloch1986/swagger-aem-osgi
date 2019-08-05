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
 * OASComDayCqPollingImporterImplManage
 */
public class OASComDayCqPollingImporterImplManage {
    /**
     * Get id
     * @return id
     */
    public OASConfigNodePropertyString id { get; set; }

    /**
     * Get enabled
     * @return enabled
     */
    public OASConfigNodePropertyBoolean enabled { get; set; }

    /**
     * Get reference
     * @return reference
     */
    public OASConfigNodePropertyBoolean reference { get; set; }

    /**
     * Get interval
     * @return interval
     */
    public OASConfigNodePropertyInteger interval { get; set; }

    /**
     * Get expression
     * @return expression
     */
    public OASConfigNodePropertyString expression { get; set; }

    /**
     * Get source
     * @return source
     */
    public OASConfigNodePropertyString source { get; set; }

    /**
     * Get target
     * @return target
     */
    public OASConfigNodePropertyString target { get; set; }

    /**
     * Get login
     * @return login
     */
    public OASConfigNodePropertyString login { get; set; }

    /**
     * Get password
     * @return password
     */
    public OASConfigNodePropertyString password { get; set; }

    public static OASComDayCqPollingImporterImplManage getExample() {
        OASComDayCqPollingImporterImplManage comDayCqPollingImporterImplManagedPollConfigImplProperties = new OASComDayCqPollingImporterImplManage();
          comDayCqPollingImporterImplManagedPollConfigImplProperties.id = OASConfigNodePropertyString.getExample();
          comDayCqPollingImporterImplManagedPollConfigImplProperties.enabled = OASConfigNodePropertyBoolean.getExample();
          comDayCqPollingImporterImplManagedPollConfigImplProperties.reference = OASConfigNodePropertyBoolean.getExample();
          comDayCqPollingImporterImplManagedPollConfigImplProperties.interval = OASConfigNodePropertyInteger.getExample();
          comDayCqPollingImporterImplManagedPollConfigImplProperties.expression = OASConfigNodePropertyString.getExample();
          comDayCqPollingImporterImplManagedPollConfigImplProperties.source = OASConfigNodePropertyString.getExample();
          comDayCqPollingImporterImplManagedPollConfigImplProperties.target = OASConfigNodePropertyString.getExample();
          comDayCqPollingImporterImplManagedPollConfigImplProperties.login = OASConfigNodePropertyString.getExample();
          comDayCqPollingImporterImplManagedPollConfigImplProperties.password = OASConfigNodePropertyString.getExample();
        return comDayCqPollingImporterImplManagedPollConfigImplProperties;
    }

    public Boolean equals(Object obj) {
        if (obj instanceof OASComDayCqPollingImporterImplManage) {           
            OASComDayCqPollingImporterImplManage comDayCqPollingImporterImplManagedPollConfigImplProperties = (OASComDayCqPollingImporterImplManage) obj;
            return this.id == comDayCqPollingImporterImplManagedPollConfigImplProperties.id
                && this.enabled == comDayCqPollingImporterImplManagedPollConfigImplProperties.enabled
                && this.reference == comDayCqPollingImporterImplManagedPollConfigImplProperties.reference
                && this.interval == comDayCqPollingImporterImplManagedPollConfigImplProperties.interval
                && this.expression == comDayCqPollingImporterImplManagedPollConfigImplProperties.expression
                && this.source == comDayCqPollingImporterImplManagedPollConfigImplProperties.source
                && this.target == comDayCqPollingImporterImplManagedPollConfigImplProperties.target
                && this.login == comDayCqPollingImporterImplManagedPollConfigImplProperties.login
                && this.password == comDayCqPollingImporterImplManagedPollConfigImplProperties.password;
        }
        return false;
    }

    public Integer hashCode() {
        Integer hashCode = 43;
        hashCode = (17 * hashCode) + (id == null ? 0 : System.hashCode(id));
        hashCode = (17 * hashCode) + (enabled == null ? 0 : System.hashCode(enabled));
        hashCode = (17 * hashCode) + (reference == null ? 0 : System.hashCode(reference));
        hashCode = (17 * hashCode) + (interval == null ? 0 : System.hashCode(interval));
        hashCode = (17 * hashCode) + (expression == null ? 0 : System.hashCode(expression));
        hashCode = (17 * hashCode) + (source == null ? 0 : System.hashCode(source));
        hashCode = (17 * hashCode) + (target == null ? 0 : System.hashCode(target));
        hashCode = (17 * hashCode) + (login == null ? 0 : System.hashCode(login));
        hashCode = (17 * hashCode) + (password == null ? 0 : System.hashCode(password));
        return hashCode;
    }
}
