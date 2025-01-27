/* 
 * Adobe Experience Manager OSGI config (AEM) API
 *
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 * Generated by: https://github.com/openapitools/openapi-generator.git
 */

using System;
using System.Linq;
using System.IO;
using System.Text;
using System.Text.RegularExpressions;
using System.Collections;
using System.Collections.Generic;
using System.Collections.ObjectModel;
using System.Runtime.Serialization;
using Newtonsoft.Json;
using Newtonsoft.Json.Converters;
using System.ComponentModel.DataAnnotations;
using OpenAPIDateConverter = Org.OpenAPITools.Client.OpenAPIDateConverter;

namespace Org.OpenAPITools.Model
{
    /// <summary>
    /// OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties
    /// </summary>
    [DataContract]
    public partial class OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties :  IEquatable<OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties>, IValidatableObject
    {
        /// <summary>
        /// Initializes a new instance of the <see cref="OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties" /> class.
        /// </summary>
        /// <param name="solrHttpUrl">solrHttpUrl.</param>
        /// <param name="solrZkHost">solrZkHost.</param>
        /// <param name="solrCollection">solrCollection.</param>
        /// <param name="solrSocketTimeout">solrSocketTimeout.</param>
        /// <param name="solrConnectionTimeout">solrConnectionTimeout.</param>
        /// <param name="solrShardsNo">solrShardsNo.</param>
        /// <param name="solrReplicationFactor">solrReplicationFactor.</param>
        /// <param name="solrConfDir">solrConfDir.</param>
        public OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties(ConfigNodePropertyString solrHttpUrl = default(ConfigNodePropertyString), ConfigNodePropertyString solrZkHost = default(ConfigNodePropertyString), ConfigNodePropertyString solrCollection = default(ConfigNodePropertyString), ConfigNodePropertyInteger solrSocketTimeout = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger solrConnectionTimeout = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger solrShardsNo = default(ConfigNodePropertyInteger), ConfigNodePropertyInteger solrReplicationFactor = default(ConfigNodePropertyInteger), ConfigNodePropertyString solrConfDir = default(ConfigNodePropertyString))
        {
            this.SolrHttpUrl = solrHttpUrl;
            this.SolrZkHost = solrZkHost;
            this.SolrCollection = solrCollection;
            this.SolrSocketTimeout = solrSocketTimeout;
            this.SolrConnectionTimeout = solrConnectionTimeout;
            this.SolrShardsNo = solrShardsNo;
            this.SolrReplicationFactor = solrReplicationFactor;
            this.SolrConfDir = solrConfDir;
        }
        
        /// <summary>
        /// Gets or Sets SolrHttpUrl
        /// </summary>
        [DataMember(Name="solr.http.url", EmitDefaultValue=false)]
        public ConfigNodePropertyString SolrHttpUrl { get; set; }

        /// <summary>
        /// Gets or Sets SolrZkHost
        /// </summary>
        [DataMember(Name="solr.zk.host", EmitDefaultValue=false)]
        public ConfigNodePropertyString SolrZkHost { get; set; }

        /// <summary>
        /// Gets or Sets SolrCollection
        /// </summary>
        [DataMember(Name="solr.collection", EmitDefaultValue=false)]
        public ConfigNodePropertyString SolrCollection { get; set; }

        /// <summary>
        /// Gets or Sets SolrSocketTimeout
        /// </summary>
        [DataMember(Name="solr.socket.timeout", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger SolrSocketTimeout { get; set; }

        /// <summary>
        /// Gets or Sets SolrConnectionTimeout
        /// </summary>
        [DataMember(Name="solr.connection.timeout", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger SolrConnectionTimeout { get; set; }

        /// <summary>
        /// Gets or Sets SolrShardsNo
        /// </summary>
        [DataMember(Name="solr.shards.no", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger SolrShardsNo { get; set; }

        /// <summary>
        /// Gets or Sets SolrReplicationFactor
        /// </summary>
        [DataMember(Name="solr.replication.factor", EmitDefaultValue=false)]
        public ConfigNodePropertyInteger SolrReplicationFactor { get; set; }

        /// <summary>
        /// Gets or Sets SolrConfDir
        /// </summary>
        [DataMember(Name="solr.conf.dir", EmitDefaultValue=false)]
        public ConfigNodePropertyString SolrConfDir { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties {\n");
            sb.Append("  SolrHttpUrl: ").Append(SolrHttpUrl).Append("\n");
            sb.Append("  SolrZkHost: ").Append(SolrZkHost).Append("\n");
            sb.Append("  SolrCollection: ").Append(SolrCollection).Append("\n");
            sb.Append("  SolrSocketTimeout: ").Append(SolrSocketTimeout).Append("\n");
            sb.Append("  SolrConnectionTimeout: ").Append(SolrConnectionTimeout).Append("\n");
            sb.Append("  SolrShardsNo: ").Append(SolrShardsNo).Append("\n");
            sb.Append("  SolrReplicationFactor: ").Append(SolrReplicationFactor).Append("\n");
            sb.Append("  SolrConfDir: ").Append(SolrConfDir).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }
  
        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public virtual string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="input">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object input)
        {
            return this.Equals(input as OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties);
        }

        /// <summary>
        /// Returns true if OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties instances are equal
        /// </summary>
        /// <param name="input">Instance of OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheJackrabbitOakPluginsIndexSolrOsgiRemoteSolrServerConfProperties input)
        {
            if (input == null)
                return false;

            return 
                (
                    this.SolrHttpUrl == input.SolrHttpUrl ||
                    (this.SolrHttpUrl != null &&
                    this.SolrHttpUrl.Equals(input.SolrHttpUrl))
                ) && 
                (
                    this.SolrZkHost == input.SolrZkHost ||
                    (this.SolrZkHost != null &&
                    this.SolrZkHost.Equals(input.SolrZkHost))
                ) && 
                (
                    this.SolrCollection == input.SolrCollection ||
                    (this.SolrCollection != null &&
                    this.SolrCollection.Equals(input.SolrCollection))
                ) && 
                (
                    this.SolrSocketTimeout == input.SolrSocketTimeout ||
                    (this.SolrSocketTimeout != null &&
                    this.SolrSocketTimeout.Equals(input.SolrSocketTimeout))
                ) && 
                (
                    this.SolrConnectionTimeout == input.SolrConnectionTimeout ||
                    (this.SolrConnectionTimeout != null &&
                    this.SolrConnectionTimeout.Equals(input.SolrConnectionTimeout))
                ) && 
                (
                    this.SolrShardsNo == input.SolrShardsNo ||
                    (this.SolrShardsNo != null &&
                    this.SolrShardsNo.Equals(input.SolrShardsNo))
                ) && 
                (
                    this.SolrReplicationFactor == input.SolrReplicationFactor ||
                    (this.SolrReplicationFactor != null &&
                    this.SolrReplicationFactor.Equals(input.SolrReplicationFactor))
                ) && 
                (
                    this.SolrConfDir == input.SolrConfDir ||
                    (this.SolrConfDir != null &&
                    this.SolrConfDir.Equals(input.SolrConfDir))
                );
        }

        /// <summary>
        /// Gets the hash code
        /// </summary>
        /// <returns>Hash code</returns>
        public override int GetHashCode()
        {
            unchecked // Overflow is fine, just wrap
            {
                int hashCode = 41;
                if (this.SolrHttpUrl != null)
                    hashCode = hashCode * 59 + this.SolrHttpUrl.GetHashCode();
                if (this.SolrZkHost != null)
                    hashCode = hashCode * 59 + this.SolrZkHost.GetHashCode();
                if (this.SolrCollection != null)
                    hashCode = hashCode * 59 + this.SolrCollection.GetHashCode();
                if (this.SolrSocketTimeout != null)
                    hashCode = hashCode * 59 + this.SolrSocketTimeout.GetHashCode();
                if (this.SolrConnectionTimeout != null)
                    hashCode = hashCode * 59 + this.SolrConnectionTimeout.GetHashCode();
                if (this.SolrShardsNo != null)
                    hashCode = hashCode * 59 + this.SolrShardsNo.GetHashCode();
                if (this.SolrReplicationFactor != null)
                    hashCode = hashCode * 59 + this.SolrReplicationFactor.GetHashCode();
                if (this.SolrConfDir != null)
                    hashCode = hashCode * 59 + this.SolrConfDir.GetHashCode();
                return hashCode;
            }
        }

        /// <summary>
        /// To validate all properties of the instance
        /// </summary>
        /// <param name="validationContext">Validation context</param>
        /// <returns>Validation Result</returns>
        IEnumerable<System.ComponentModel.DataAnnotations.ValidationResult> IValidatableObject.Validate(ValidationContext validationContext)
        {
            yield break;
        }
    }

}
