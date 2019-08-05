/*
 * Adobe Experience Manager OSGI config (AEM) API
 *
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 * Generated by: https://openapi-generator.tech
 */

using System;
using System.Linq;
using System.Text;
using System.Collections.Generic;
using System.ComponentModel.DataAnnotations;
using System.Runtime.Serialization;
using Newtonsoft.Json;

namespace Org.OpenAPITools.Models
{ 
    /// <summary>
    /// 
    /// </summary>
    [DataContract]
    public partial class OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties : IEquatable<OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties>
    { 
        /// <summary>
        /// Gets or Sets AccountName
        /// </summary>
        [DataMember(Name="accountName")]
        public ConfigNodePropertyString AccountName { get; set; }

        /// <summary>
        /// Gets or Sets ContainerName
        /// </summary>
        [DataMember(Name="containerName")]
        public ConfigNodePropertyString ContainerName { get; set; }

        /// <summary>
        /// Gets or Sets AccessKey
        /// </summary>
        [DataMember(Name="accessKey")]
        public ConfigNodePropertyString AccessKey { get; set; }

        /// <summary>
        /// Gets or Sets RootPath
        /// </summary>
        [DataMember(Name="rootPath")]
        public ConfigNodePropertyString RootPath { get; set; }

        /// <summary>
        /// Gets or Sets ConnectionURL
        /// </summary>
        [DataMember(Name="connectionURL")]
        public ConfigNodePropertyString ConnectionURL { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties {\n");
            sb.Append("  AccountName: ").Append(AccountName).Append("\n");
            sb.Append("  ContainerName: ").Append(ContainerName).Append("\n");
            sb.Append("  AccessKey: ").Append(AccessKey).Append("\n");
            sb.Append("  RootPath: ").Append(RootPath).Append("\n");
            sb.Append("  ConnectionURL: ").Append(ConnectionURL).Append("\n");
            sb.Append("}\n");
            return sb.ToString();
        }

        /// <summary>
        /// Returns the JSON string presentation of the object
        /// </summary>
        /// <returns>JSON string presentation of the object</returns>
        public string ToJson()
        {
            return JsonConvert.SerializeObject(this, Formatting.Indented);
        }

        /// <summary>
        /// Returns true if objects are equal
        /// </summary>
        /// <param name="obj">Object to be compared</param>
        /// <returns>Boolean</returns>
        public override bool Equals(object obj)
        {
            if (obj is null) return false;
            if (ReferenceEquals(this, obj)) return true;
            return obj.GetType() == GetType() && Equals((OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties)obj);
        }

        /// <summary>
        /// Returns true if OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    AccountName == other.AccountName ||
                    AccountName != null &&
                    AccountName.Equals(other.AccountName)
                ) && 
                (
                    ContainerName == other.ContainerName ||
                    ContainerName != null &&
                    ContainerName.Equals(other.ContainerName)
                ) && 
                (
                    AccessKey == other.AccessKey ||
                    AccessKey != null &&
                    AccessKey.Equals(other.AccessKey)
                ) && 
                (
                    RootPath == other.RootPath ||
                    RootPath != null &&
                    RootPath.Equals(other.RootPath)
                ) && 
                (
                    ConnectionURL == other.ConnectionURL ||
                    ConnectionURL != null &&
                    ConnectionURL.Equals(other.ConnectionURL)
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
                var hashCode = 41;
                // Suitable nullity checks etc, of course :)
                    if (AccountName != null)
                    hashCode = hashCode * 59 + AccountName.GetHashCode();
                    if (ContainerName != null)
                    hashCode = hashCode * 59 + ContainerName.GetHashCode();
                    if (AccessKey != null)
                    hashCode = hashCode * 59 + AccessKey.GetHashCode();
                    if (RootPath != null)
                    hashCode = hashCode * 59 + RootPath.GetHashCode();
                    if (ConnectionURL != null)
                    hashCode = hashCode * 59 + ConnectionURL.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties left, OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties left, OrgApacheJackrabbitOakSegmentAzureAzureSegmentStoreServiceProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}