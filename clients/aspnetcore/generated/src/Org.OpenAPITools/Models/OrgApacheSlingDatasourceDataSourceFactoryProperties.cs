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
    public partial class OrgApacheSlingDatasourceDataSourceFactoryProperties : IEquatable<OrgApacheSlingDatasourceDataSourceFactoryProperties>
    { 
        /// <summary>
        /// Gets or Sets DatasourceName
        /// </summary>
        [DataMember(Name="datasource.name")]
        public ConfigNodePropertyString DatasourceName { get; set; }

        /// <summary>
        /// Gets or Sets DatasourceSvcPropName
        /// </summary>
        [DataMember(Name="datasource.svc.prop.name")]
        public ConfigNodePropertyString DatasourceSvcPropName { get; set; }

        /// <summary>
        /// Gets or Sets DriverClassName
        /// </summary>
        [DataMember(Name="driverClassName")]
        public ConfigNodePropertyString DriverClassName { get; set; }

        /// <summary>
        /// Gets or Sets Url
        /// </summary>
        [DataMember(Name="url")]
        public ConfigNodePropertyString Url { get; set; }

        /// <summary>
        /// Gets or Sets Username
        /// </summary>
        [DataMember(Name="username")]
        public ConfigNodePropertyString Username { get; set; }

        /// <summary>
        /// Gets or Sets Password
        /// </summary>
        [DataMember(Name="password")]
        public ConfigNodePropertyString Password { get; set; }

        /// <summary>
        /// Gets or Sets DefaultAutoCommit
        /// </summary>
        [DataMember(Name="defaultAutoCommit")]
        public ConfigNodePropertyDropDown DefaultAutoCommit { get; set; }

        /// <summary>
        /// Gets or Sets DefaultReadOnly
        /// </summary>
        [DataMember(Name="defaultReadOnly")]
        public ConfigNodePropertyDropDown DefaultReadOnly { get; set; }

        /// <summary>
        /// Gets or Sets DefaultTransactionIsolation
        /// </summary>
        [DataMember(Name="defaultTransactionIsolation")]
        public ConfigNodePropertyDropDown DefaultTransactionIsolation { get; set; }

        /// <summary>
        /// Gets or Sets DefaultCatalog
        /// </summary>
        [DataMember(Name="defaultCatalog")]
        public ConfigNodePropertyString DefaultCatalog { get; set; }

        /// <summary>
        /// Gets or Sets MaxActive
        /// </summary>
        [DataMember(Name="maxActive")]
        public ConfigNodePropertyInteger MaxActive { get; set; }

        /// <summary>
        /// Gets or Sets MaxIdle
        /// </summary>
        [DataMember(Name="maxIdle")]
        public ConfigNodePropertyInteger MaxIdle { get; set; }

        /// <summary>
        /// Gets or Sets MinIdle
        /// </summary>
        [DataMember(Name="minIdle")]
        public ConfigNodePropertyInteger MinIdle { get; set; }

        /// <summary>
        /// Gets or Sets InitialSize
        /// </summary>
        [DataMember(Name="initialSize")]
        public ConfigNodePropertyInteger InitialSize { get; set; }

        /// <summary>
        /// Gets or Sets MaxWait
        /// </summary>
        [DataMember(Name="maxWait")]
        public ConfigNodePropertyInteger MaxWait { get; set; }

        /// <summary>
        /// Gets or Sets MaxAge
        /// </summary>
        [DataMember(Name="maxAge")]
        public ConfigNodePropertyInteger MaxAge { get; set; }

        /// <summary>
        /// Gets or Sets TestOnBorrow
        /// </summary>
        [DataMember(Name="testOnBorrow")]
        public ConfigNodePropertyBoolean TestOnBorrow { get; set; }

        /// <summary>
        /// Gets or Sets TestOnReturn
        /// </summary>
        [DataMember(Name="testOnReturn")]
        public ConfigNodePropertyBoolean TestOnReturn { get; set; }

        /// <summary>
        /// Gets or Sets TestWhileIdle
        /// </summary>
        [DataMember(Name="testWhileIdle")]
        public ConfigNodePropertyBoolean TestWhileIdle { get; set; }

        /// <summary>
        /// Gets or Sets ValidationQuery
        /// </summary>
        [DataMember(Name="validationQuery")]
        public ConfigNodePropertyString ValidationQuery { get; set; }

        /// <summary>
        /// Gets or Sets ValidationQueryTimeout
        /// </summary>
        [DataMember(Name="validationQueryTimeout")]
        public ConfigNodePropertyInteger ValidationQueryTimeout { get; set; }

        /// <summary>
        /// Gets or Sets TimeBetweenEvictionRunsMillis
        /// </summary>
        [DataMember(Name="timeBetweenEvictionRunsMillis")]
        public ConfigNodePropertyInteger TimeBetweenEvictionRunsMillis { get; set; }

        /// <summary>
        /// Gets or Sets MinEvictableIdleTimeMillis
        /// </summary>
        [DataMember(Name="minEvictableIdleTimeMillis")]
        public ConfigNodePropertyInteger MinEvictableIdleTimeMillis { get; set; }

        /// <summary>
        /// Gets or Sets ConnectionProperties
        /// </summary>
        [DataMember(Name="connectionProperties")]
        public ConfigNodePropertyString ConnectionProperties { get; set; }

        /// <summary>
        /// Gets or Sets InitSQL
        /// </summary>
        [DataMember(Name="initSQL")]
        public ConfigNodePropertyString InitSQL { get; set; }

        /// <summary>
        /// Gets or Sets JdbcInterceptors
        /// </summary>
        [DataMember(Name="jdbcInterceptors")]
        public ConfigNodePropertyString JdbcInterceptors { get; set; }

        /// <summary>
        /// Gets or Sets ValidationInterval
        /// </summary>
        [DataMember(Name="validationInterval")]
        public ConfigNodePropertyInteger ValidationInterval { get; set; }

        /// <summary>
        /// Gets or Sets LogValidationErrors
        /// </summary>
        [DataMember(Name="logValidationErrors")]
        public ConfigNodePropertyBoolean LogValidationErrors { get; set; }

        /// <summary>
        /// Gets or Sets DatasourceSvcProperties
        /// </summary>
        [DataMember(Name="datasource.svc.properties")]
        public ConfigNodePropertyArray DatasourceSvcProperties { get; set; }

        /// <summary>
        /// Returns the string presentation of the object
        /// </summary>
        /// <returns>String presentation of the object</returns>
        public override string ToString()
        {
            var sb = new StringBuilder();
            sb.Append("class OrgApacheSlingDatasourceDataSourceFactoryProperties {\n");
            sb.Append("  DatasourceName: ").Append(DatasourceName).Append("\n");
            sb.Append("  DatasourceSvcPropName: ").Append(DatasourceSvcPropName).Append("\n");
            sb.Append("  DriverClassName: ").Append(DriverClassName).Append("\n");
            sb.Append("  Url: ").Append(Url).Append("\n");
            sb.Append("  Username: ").Append(Username).Append("\n");
            sb.Append("  Password: ").Append(Password).Append("\n");
            sb.Append("  DefaultAutoCommit: ").Append(DefaultAutoCommit).Append("\n");
            sb.Append("  DefaultReadOnly: ").Append(DefaultReadOnly).Append("\n");
            sb.Append("  DefaultTransactionIsolation: ").Append(DefaultTransactionIsolation).Append("\n");
            sb.Append("  DefaultCatalog: ").Append(DefaultCatalog).Append("\n");
            sb.Append("  MaxActive: ").Append(MaxActive).Append("\n");
            sb.Append("  MaxIdle: ").Append(MaxIdle).Append("\n");
            sb.Append("  MinIdle: ").Append(MinIdle).Append("\n");
            sb.Append("  InitialSize: ").Append(InitialSize).Append("\n");
            sb.Append("  MaxWait: ").Append(MaxWait).Append("\n");
            sb.Append("  MaxAge: ").Append(MaxAge).Append("\n");
            sb.Append("  TestOnBorrow: ").Append(TestOnBorrow).Append("\n");
            sb.Append("  TestOnReturn: ").Append(TestOnReturn).Append("\n");
            sb.Append("  TestWhileIdle: ").Append(TestWhileIdle).Append("\n");
            sb.Append("  ValidationQuery: ").Append(ValidationQuery).Append("\n");
            sb.Append("  ValidationQueryTimeout: ").Append(ValidationQueryTimeout).Append("\n");
            sb.Append("  TimeBetweenEvictionRunsMillis: ").Append(TimeBetweenEvictionRunsMillis).Append("\n");
            sb.Append("  MinEvictableIdleTimeMillis: ").Append(MinEvictableIdleTimeMillis).Append("\n");
            sb.Append("  ConnectionProperties: ").Append(ConnectionProperties).Append("\n");
            sb.Append("  InitSQL: ").Append(InitSQL).Append("\n");
            sb.Append("  JdbcInterceptors: ").Append(JdbcInterceptors).Append("\n");
            sb.Append("  ValidationInterval: ").Append(ValidationInterval).Append("\n");
            sb.Append("  LogValidationErrors: ").Append(LogValidationErrors).Append("\n");
            sb.Append("  DatasourceSvcProperties: ").Append(DatasourceSvcProperties).Append("\n");
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
            return obj.GetType() == GetType() && Equals((OrgApacheSlingDatasourceDataSourceFactoryProperties)obj);
        }

        /// <summary>
        /// Returns true if OrgApacheSlingDatasourceDataSourceFactoryProperties instances are equal
        /// </summary>
        /// <param name="other">Instance of OrgApacheSlingDatasourceDataSourceFactoryProperties to be compared</param>
        /// <returns>Boolean</returns>
        public bool Equals(OrgApacheSlingDatasourceDataSourceFactoryProperties other)
        {
            if (other is null) return false;
            if (ReferenceEquals(this, other)) return true;

            return 
                (
                    DatasourceName == other.DatasourceName ||
                    DatasourceName != null &&
                    DatasourceName.Equals(other.DatasourceName)
                ) && 
                (
                    DatasourceSvcPropName == other.DatasourceSvcPropName ||
                    DatasourceSvcPropName != null &&
                    DatasourceSvcPropName.Equals(other.DatasourceSvcPropName)
                ) && 
                (
                    DriverClassName == other.DriverClassName ||
                    DriverClassName != null &&
                    DriverClassName.Equals(other.DriverClassName)
                ) && 
                (
                    Url == other.Url ||
                    Url != null &&
                    Url.Equals(other.Url)
                ) && 
                (
                    Username == other.Username ||
                    Username != null &&
                    Username.Equals(other.Username)
                ) && 
                (
                    Password == other.Password ||
                    Password != null &&
                    Password.Equals(other.Password)
                ) && 
                (
                    DefaultAutoCommit == other.DefaultAutoCommit ||
                    DefaultAutoCommit != null &&
                    DefaultAutoCommit.Equals(other.DefaultAutoCommit)
                ) && 
                (
                    DefaultReadOnly == other.DefaultReadOnly ||
                    DefaultReadOnly != null &&
                    DefaultReadOnly.Equals(other.DefaultReadOnly)
                ) && 
                (
                    DefaultTransactionIsolation == other.DefaultTransactionIsolation ||
                    DefaultTransactionIsolation != null &&
                    DefaultTransactionIsolation.Equals(other.DefaultTransactionIsolation)
                ) && 
                (
                    DefaultCatalog == other.DefaultCatalog ||
                    DefaultCatalog != null &&
                    DefaultCatalog.Equals(other.DefaultCatalog)
                ) && 
                (
                    MaxActive == other.MaxActive ||
                    MaxActive != null &&
                    MaxActive.Equals(other.MaxActive)
                ) && 
                (
                    MaxIdle == other.MaxIdle ||
                    MaxIdle != null &&
                    MaxIdle.Equals(other.MaxIdle)
                ) && 
                (
                    MinIdle == other.MinIdle ||
                    MinIdle != null &&
                    MinIdle.Equals(other.MinIdle)
                ) && 
                (
                    InitialSize == other.InitialSize ||
                    InitialSize != null &&
                    InitialSize.Equals(other.InitialSize)
                ) && 
                (
                    MaxWait == other.MaxWait ||
                    MaxWait != null &&
                    MaxWait.Equals(other.MaxWait)
                ) && 
                (
                    MaxAge == other.MaxAge ||
                    MaxAge != null &&
                    MaxAge.Equals(other.MaxAge)
                ) && 
                (
                    TestOnBorrow == other.TestOnBorrow ||
                    TestOnBorrow != null &&
                    TestOnBorrow.Equals(other.TestOnBorrow)
                ) && 
                (
                    TestOnReturn == other.TestOnReturn ||
                    TestOnReturn != null &&
                    TestOnReturn.Equals(other.TestOnReturn)
                ) && 
                (
                    TestWhileIdle == other.TestWhileIdle ||
                    TestWhileIdle != null &&
                    TestWhileIdle.Equals(other.TestWhileIdle)
                ) && 
                (
                    ValidationQuery == other.ValidationQuery ||
                    ValidationQuery != null &&
                    ValidationQuery.Equals(other.ValidationQuery)
                ) && 
                (
                    ValidationQueryTimeout == other.ValidationQueryTimeout ||
                    ValidationQueryTimeout != null &&
                    ValidationQueryTimeout.Equals(other.ValidationQueryTimeout)
                ) && 
                (
                    TimeBetweenEvictionRunsMillis == other.TimeBetweenEvictionRunsMillis ||
                    TimeBetweenEvictionRunsMillis != null &&
                    TimeBetweenEvictionRunsMillis.Equals(other.TimeBetweenEvictionRunsMillis)
                ) && 
                (
                    MinEvictableIdleTimeMillis == other.MinEvictableIdleTimeMillis ||
                    MinEvictableIdleTimeMillis != null &&
                    MinEvictableIdleTimeMillis.Equals(other.MinEvictableIdleTimeMillis)
                ) && 
                (
                    ConnectionProperties == other.ConnectionProperties ||
                    ConnectionProperties != null &&
                    ConnectionProperties.Equals(other.ConnectionProperties)
                ) && 
                (
                    InitSQL == other.InitSQL ||
                    InitSQL != null &&
                    InitSQL.Equals(other.InitSQL)
                ) && 
                (
                    JdbcInterceptors == other.JdbcInterceptors ||
                    JdbcInterceptors != null &&
                    JdbcInterceptors.Equals(other.JdbcInterceptors)
                ) && 
                (
                    ValidationInterval == other.ValidationInterval ||
                    ValidationInterval != null &&
                    ValidationInterval.Equals(other.ValidationInterval)
                ) && 
                (
                    LogValidationErrors == other.LogValidationErrors ||
                    LogValidationErrors != null &&
                    LogValidationErrors.Equals(other.LogValidationErrors)
                ) && 
                (
                    DatasourceSvcProperties == other.DatasourceSvcProperties ||
                    DatasourceSvcProperties != null &&
                    DatasourceSvcProperties.Equals(other.DatasourceSvcProperties)
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
                    if (DatasourceName != null)
                    hashCode = hashCode * 59 + DatasourceName.GetHashCode();
                    if (DatasourceSvcPropName != null)
                    hashCode = hashCode * 59 + DatasourceSvcPropName.GetHashCode();
                    if (DriverClassName != null)
                    hashCode = hashCode * 59 + DriverClassName.GetHashCode();
                    if (Url != null)
                    hashCode = hashCode * 59 + Url.GetHashCode();
                    if (Username != null)
                    hashCode = hashCode * 59 + Username.GetHashCode();
                    if (Password != null)
                    hashCode = hashCode * 59 + Password.GetHashCode();
                    if (DefaultAutoCommit != null)
                    hashCode = hashCode * 59 + DefaultAutoCommit.GetHashCode();
                    if (DefaultReadOnly != null)
                    hashCode = hashCode * 59 + DefaultReadOnly.GetHashCode();
                    if (DefaultTransactionIsolation != null)
                    hashCode = hashCode * 59 + DefaultTransactionIsolation.GetHashCode();
                    if (DefaultCatalog != null)
                    hashCode = hashCode * 59 + DefaultCatalog.GetHashCode();
                    if (MaxActive != null)
                    hashCode = hashCode * 59 + MaxActive.GetHashCode();
                    if (MaxIdle != null)
                    hashCode = hashCode * 59 + MaxIdle.GetHashCode();
                    if (MinIdle != null)
                    hashCode = hashCode * 59 + MinIdle.GetHashCode();
                    if (InitialSize != null)
                    hashCode = hashCode * 59 + InitialSize.GetHashCode();
                    if (MaxWait != null)
                    hashCode = hashCode * 59 + MaxWait.GetHashCode();
                    if (MaxAge != null)
                    hashCode = hashCode * 59 + MaxAge.GetHashCode();
                    if (TestOnBorrow != null)
                    hashCode = hashCode * 59 + TestOnBorrow.GetHashCode();
                    if (TestOnReturn != null)
                    hashCode = hashCode * 59 + TestOnReturn.GetHashCode();
                    if (TestWhileIdle != null)
                    hashCode = hashCode * 59 + TestWhileIdle.GetHashCode();
                    if (ValidationQuery != null)
                    hashCode = hashCode * 59 + ValidationQuery.GetHashCode();
                    if (ValidationQueryTimeout != null)
                    hashCode = hashCode * 59 + ValidationQueryTimeout.GetHashCode();
                    if (TimeBetweenEvictionRunsMillis != null)
                    hashCode = hashCode * 59 + TimeBetweenEvictionRunsMillis.GetHashCode();
                    if (MinEvictableIdleTimeMillis != null)
                    hashCode = hashCode * 59 + MinEvictableIdleTimeMillis.GetHashCode();
                    if (ConnectionProperties != null)
                    hashCode = hashCode * 59 + ConnectionProperties.GetHashCode();
                    if (InitSQL != null)
                    hashCode = hashCode * 59 + InitSQL.GetHashCode();
                    if (JdbcInterceptors != null)
                    hashCode = hashCode * 59 + JdbcInterceptors.GetHashCode();
                    if (ValidationInterval != null)
                    hashCode = hashCode * 59 + ValidationInterval.GetHashCode();
                    if (LogValidationErrors != null)
                    hashCode = hashCode * 59 + LogValidationErrors.GetHashCode();
                    if (DatasourceSvcProperties != null)
                    hashCode = hashCode * 59 + DatasourceSvcProperties.GetHashCode();
                return hashCode;
            }
        }

        #region Operators
        #pragma warning disable 1591

        public static bool operator ==(OrgApacheSlingDatasourceDataSourceFactoryProperties left, OrgApacheSlingDatasourceDataSourceFactoryProperties right)
        {
            return Equals(left, right);
        }

        public static bool operator !=(OrgApacheSlingDatasourceDataSourceFactoryProperties left, OrgApacheSlingDatasourceDataSourceFactoryProperties right)
        {
            return !Equals(left, right);
        }

        #pragma warning restore 1591
        #endregion Operators
    }
}
