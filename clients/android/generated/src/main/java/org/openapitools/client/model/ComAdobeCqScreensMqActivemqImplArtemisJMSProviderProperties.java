/**
 * Adobe Experience Manager OSGI config (AEM) API
 * Swagger AEM OSGI is an OpenAPI specification for Adobe Experience Manager (AEM) OSGI Configurations API
 *
 * OpenAPI spec version: 1.0.0-pre.0
 * Contact: opensource@shinesolutions.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator (https://openapi-generator.tech).
 * https://openapi-generator.tech
 * Do not edit the class manually.
 */

package org.openapitools.client.model;

import org.openapitools.client.model.ConfigNodePropertyArray;
import org.openapitools.client.model.ConfigNodePropertyBoolean;
import org.openapitools.client.model.ConfigNodePropertyDropDown;
import org.openapitools.client.model.ConfigNodePropertyFloat;
import org.openapitools.client.model.ConfigNodePropertyInteger;
import org.openapitools.client.model.ConfigNodePropertyString;
import io.swagger.annotations.*;
import com.google.gson.annotations.SerializedName;

@ApiModel(description = "")
public class ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties {
  
  @SerializedName("service.ranking")
  private ConfigNodePropertyInteger serviceRanking = null;
  @SerializedName("global.size")
  private ConfigNodePropertyInteger globalSize = null;
  @SerializedName("max.disk.usage")
  private ConfigNodePropertyInteger maxDiskUsage = null;
  @SerializedName("persistence.enabled")
  private ConfigNodePropertyBoolean persistenceEnabled = null;
  @SerializedName("thread.pool.max.size")
  private ConfigNodePropertyInteger threadPoolMaxSize = null;
  @SerializedName("scheduled.thread.pool.max.size")
  private ConfigNodePropertyInteger scheduledThreadPoolMaxSize = null;
  @SerializedName("graceful.shutdown.timeout")
  private ConfigNodePropertyInteger gracefulShutdownTimeout = null;
  @SerializedName("queues")
  private ConfigNodePropertyArray queues = null;
  @SerializedName("topics")
  private ConfigNodePropertyArray topics = null;
  @SerializedName("addresses.max.delivery.attempts")
  private ConfigNodePropertyInteger addressesMaxDeliveryAttempts = null;
  @SerializedName("addresses.expiry.delay")
  private ConfigNodePropertyInteger addressesExpiryDelay = null;
  @SerializedName("addresses.address.full.message.policy")
  private ConfigNodePropertyDropDown addressesAddressFullMessagePolicy = null;
  @SerializedName("addresses.max.size.bytes")
  private ConfigNodePropertyInteger addressesMaxSizeBytes = null;
  @SerializedName("addresses.page.size.bytes")
  private ConfigNodePropertyInteger addressesPageSizeBytes = null;
  @SerializedName("addresses.page.cache.max.size")
  private ConfigNodePropertyInteger addressesPageCacheMaxSize = null;
  @SerializedName("cluster.user")
  private ConfigNodePropertyString clusterUser = null;
  @SerializedName("cluster.password")
  private ConfigNodePropertyString clusterPassword = null;
  @SerializedName("cluster.call.timeout")
  private ConfigNodePropertyInteger clusterCallTimeout = null;
  @SerializedName("cluster.call.failover.timeout")
  private ConfigNodePropertyInteger clusterCallFailoverTimeout = null;
  @SerializedName("cluster.client.failure.check.period")
  private ConfigNodePropertyInteger clusterClientFailureCheckPeriod = null;
  @SerializedName("cluster.notification.attempts")
  private ConfigNodePropertyInteger clusterNotificationAttempts = null;
  @SerializedName("cluster.notification.interval")
  private ConfigNodePropertyInteger clusterNotificationInterval = null;
  @SerializedName("id.cache.size")
  private ConfigNodePropertyInteger idCacheSize = null;
  @SerializedName("cluster.confirmation.window.size")
  private ConfigNodePropertyInteger clusterConfirmationWindowSize = null;
  @SerializedName("cluster.connection.ttl")
  private ConfigNodePropertyInteger clusterConnectionTtl = null;
  @SerializedName("cluster.duplicate.detection")
  private ConfigNodePropertyBoolean clusterDuplicateDetection = null;
  @SerializedName("cluster.initial.connect.attempts")
  private ConfigNodePropertyInteger clusterInitialConnectAttempts = null;
  @SerializedName("cluster.max.retry.interval")
  private ConfigNodePropertyInteger clusterMaxRetryInterval = null;
  @SerializedName("cluster.min.large.message.size")
  private ConfigNodePropertyInteger clusterMinLargeMessageSize = null;
  @SerializedName("cluster.producer.window.size")
  private ConfigNodePropertyInteger clusterProducerWindowSize = null;
  @SerializedName("cluster.reconnect.attempts")
  private ConfigNodePropertyInteger clusterReconnectAttempts = null;
  @SerializedName("cluster.retry.interval")
  private ConfigNodePropertyInteger clusterRetryInterval = null;
  @SerializedName("cluster.retry.interval.multiplier")
  private ConfigNodePropertyFloat clusterRetryIntervalMultiplier = null;

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getServiceRanking() {
    return serviceRanking;
  }
  public void setServiceRanking(ConfigNodePropertyInteger serviceRanking) {
    this.serviceRanking = serviceRanking;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getGlobalSize() {
    return globalSize;
  }
  public void setGlobalSize(ConfigNodePropertyInteger globalSize) {
    this.globalSize = globalSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getMaxDiskUsage() {
    return maxDiskUsage;
  }
  public void setMaxDiskUsage(ConfigNodePropertyInteger maxDiskUsage) {
    this.maxDiskUsage = maxDiskUsage;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getPersistenceEnabled() {
    return persistenceEnabled;
  }
  public void setPersistenceEnabled(ConfigNodePropertyBoolean persistenceEnabled) {
    this.persistenceEnabled = persistenceEnabled;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getThreadPoolMaxSize() {
    return threadPoolMaxSize;
  }
  public void setThreadPoolMaxSize(ConfigNodePropertyInteger threadPoolMaxSize) {
    this.threadPoolMaxSize = threadPoolMaxSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getScheduledThreadPoolMaxSize() {
    return scheduledThreadPoolMaxSize;
  }
  public void setScheduledThreadPoolMaxSize(ConfigNodePropertyInteger scheduledThreadPoolMaxSize) {
    this.scheduledThreadPoolMaxSize = scheduledThreadPoolMaxSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getGracefulShutdownTimeout() {
    return gracefulShutdownTimeout;
  }
  public void setGracefulShutdownTimeout(ConfigNodePropertyInteger gracefulShutdownTimeout) {
    this.gracefulShutdownTimeout = gracefulShutdownTimeout;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getQueues() {
    return queues;
  }
  public void setQueues(ConfigNodePropertyArray queues) {
    this.queues = queues;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyArray getTopics() {
    return topics;
  }
  public void setTopics(ConfigNodePropertyArray topics) {
    this.topics = topics;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getAddressesMaxDeliveryAttempts() {
    return addressesMaxDeliveryAttempts;
  }
  public void setAddressesMaxDeliveryAttempts(ConfigNodePropertyInteger addressesMaxDeliveryAttempts) {
    this.addressesMaxDeliveryAttempts = addressesMaxDeliveryAttempts;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getAddressesExpiryDelay() {
    return addressesExpiryDelay;
  }
  public void setAddressesExpiryDelay(ConfigNodePropertyInteger addressesExpiryDelay) {
    this.addressesExpiryDelay = addressesExpiryDelay;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyDropDown getAddressesAddressFullMessagePolicy() {
    return addressesAddressFullMessagePolicy;
  }
  public void setAddressesAddressFullMessagePolicy(ConfigNodePropertyDropDown addressesAddressFullMessagePolicy) {
    this.addressesAddressFullMessagePolicy = addressesAddressFullMessagePolicy;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getAddressesMaxSizeBytes() {
    return addressesMaxSizeBytes;
  }
  public void setAddressesMaxSizeBytes(ConfigNodePropertyInteger addressesMaxSizeBytes) {
    this.addressesMaxSizeBytes = addressesMaxSizeBytes;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getAddressesPageSizeBytes() {
    return addressesPageSizeBytes;
  }
  public void setAddressesPageSizeBytes(ConfigNodePropertyInteger addressesPageSizeBytes) {
    this.addressesPageSizeBytes = addressesPageSizeBytes;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getAddressesPageCacheMaxSize() {
    return addressesPageCacheMaxSize;
  }
  public void setAddressesPageCacheMaxSize(ConfigNodePropertyInteger addressesPageCacheMaxSize) {
    this.addressesPageCacheMaxSize = addressesPageCacheMaxSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getClusterUser() {
    return clusterUser;
  }
  public void setClusterUser(ConfigNodePropertyString clusterUser) {
    this.clusterUser = clusterUser;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyString getClusterPassword() {
    return clusterPassword;
  }
  public void setClusterPassword(ConfigNodePropertyString clusterPassword) {
    this.clusterPassword = clusterPassword;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getClusterCallTimeout() {
    return clusterCallTimeout;
  }
  public void setClusterCallTimeout(ConfigNodePropertyInteger clusterCallTimeout) {
    this.clusterCallTimeout = clusterCallTimeout;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getClusterCallFailoverTimeout() {
    return clusterCallFailoverTimeout;
  }
  public void setClusterCallFailoverTimeout(ConfigNodePropertyInteger clusterCallFailoverTimeout) {
    this.clusterCallFailoverTimeout = clusterCallFailoverTimeout;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getClusterClientFailureCheckPeriod() {
    return clusterClientFailureCheckPeriod;
  }
  public void setClusterClientFailureCheckPeriod(ConfigNodePropertyInteger clusterClientFailureCheckPeriod) {
    this.clusterClientFailureCheckPeriod = clusterClientFailureCheckPeriod;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getClusterNotificationAttempts() {
    return clusterNotificationAttempts;
  }
  public void setClusterNotificationAttempts(ConfigNodePropertyInteger clusterNotificationAttempts) {
    this.clusterNotificationAttempts = clusterNotificationAttempts;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getClusterNotificationInterval() {
    return clusterNotificationInterval;
  }
  public void setClusterNotificationInterval(ConfigNodePropertyInteger clusterNotificationInterval) {
    this.clusterNotificationInterval = clusterNotificationInterval;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getIdCacheSize() {
    return idCacheSize;
  }
  public void setIdCacheSize(ConfigNodePropertyInteger idCacheSize) {
    this.idCacheSize = idCacheSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getClusterConfirmationWindowSize() {
    return clusterConfirmationWindowSize;
  }
  public void setClusterConfirmationWindowSize(ConfigNodePropertyInteger clusterConfirmationWindowSize) {
    this.clusterConfirmationWindowSize = clusterConfirmationWindowSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getClusterConnectionTtl() {
    return clusterConnectionTtl;
  }
  public void setClusterConnectionTtl(ConfigNodePropertyInteger clusterConnectionTtl) {
    this.clusterConnectionTtl = clusterConnectionTtl;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyBoolean getClusterDuplicateDetection() {
    return clusterDuplicateDetection;
  }
  public void setClusterDuplicateDetection(ConfigNodePropertyBoolean clusterDuplicateDetection) {
    this.clusterDuplicateDetection = clusterDuplicateDetection;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getClusterInitialConnectAttempts() {
    return clusterInitialConnectAttempts;
  }
  public void setClusterInitialConnectAttempts(ConfigNodePropertyInteger clusterInitialConnectAttempts) {
    this.clusterInitialConnectAttempts = clusterInitialConnectAttempts;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getClusterMaxRetryInterval() {
    return clusterMaxRetryInterval;
  }
  public void setClusterMaxRetryInterval(ConfigNodePropertyInteger clusterMaxRetryInterval) {
    this.clusterMaxRetryInterval = clusterMaxRetryInterval;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getClusterMinLargeMessageSize() {
    return clusterMinLargeMessageSize;
  }
  public void setClusterMinLargeMessageSize(ConfigNodePropertyInteger clusterMinLargeMessageSize) {
    this.clusterMinLargeMessageSize = clusterMinLargeMessageSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getClusterProducerWindowSize() {
    return clusterProducerWindowSize;
  }
  public void setClusterProducerWindowSize(ConfigNodePropertyInteger clusterProducerWindowSize) {
    this.clusterProducerWindowSize = clusterProducerWindowSize;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getClusterReconnectAttempts() {
    return clusterReconnectAttempts;
  }
  public void setClusterReconnectAttempts(ConfigNodePropertyInteger clusterReconnectAttempts) {
    this.clusterReconnectAttempts = clusterReconnectAttempts;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyInteger getClusterRetryInterval() {
    return clusterRetryInterval;
  }
  public void setClusterRetryInterval(ConfigNodePropertyInteger clusterRetryInterval) {
    this.clusterRetryInterval = clusterRetryInterval;
  }

  /**
   **/
  @ApiModelProperty(value = "")
  public ConfigNodePropertyFloat getClusterRetryIntervalMultiplier() {
    return clusterRetryIntervalMultiplier;
  }
  public void setClusterRetryIntervalMultiplier(ConfigNodePropertyFloat clusterRetryIntervalMultiplier) {
    this.clusterRetryIntervalMultiplier = clusterRetryIntervalMultiplier;
  }


  @Override
  public boolean equals(Object o) {
    if (this == o) {
      return true;
    }
    if (o == null || getClass() != o.getClass()) {
      return false;
    }
    ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties = (ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties) o;
    return (this.serviceRanking == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.serviceRanking == null : this.serviceRanking.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.serviceRanking)) &&
        (this.globalSize == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.globalSize == null : this.globalSize.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.globalSize)) &&
        (this.maxDiskUsage == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.maxDiskUsage == null : this.maxDiskUsage.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.maxDiskUsage)) &&
        (this.persistenceEnabled == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.persistenceEnabled == null : this.persistenceEnabled.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.persistenceEnabled)) &&
        (this.threadPoolMaxSize == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.threadPoolMaxSize == null : this.threadPoolMaxSize.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.threadPoolMaxSize)) &&
        (this.scheduledThreadPoolMaxSize == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.scheduledThreadPoolMaxSize == null : this.scheduledThreadPoolMaxSize.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.scheduledThreadPoolMaxSize)) &&
        (this.gracefulShutdownTimeout == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.gracefulShutdownTimeout == null : this.gracefulShutdownTimeout.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.gracefulShutdownTimeout)) &&
        (this.queues == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.queues == null : this.queues.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.queues)) &&
        (this.topics == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.topics == null : this.topics.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.topics)) &&
        (this.addressesMaxDeliveryAttempts == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.addressesMaxDeliveryAttempts == null : this.addressesMaxDeliveryAttempts.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.addressesMaxDeliveryAttempts)) &&
        (this.addressesExpiryDelay == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.addressesExpiryDelay == null : this.addressesExpiryDelay.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.addressesExpiryDelay)) &&
        (this.addressesAddressFullMessagePolicy == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.addressesAddressFullMessagePolicy == null : this.addressesAddressFullMessagePolicy.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.addressesAddressFullMessagePolicy)) &&
        (this.addressesMaxSizeBytes == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.addressesMaxSizeBytes == null : this.addressesMaxSizeBytes.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.addressesMaxSizeBytes)) &&
        (this.addressesPageSizeBytes == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.addressesPageSizeBytes == null : this.addressesPageSizeBytes.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.addressesPageSizeBytes)) &&
        (this.addressesPageCacheMaxSize == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.addressesPageCacheMaxSize == null : this.addressesPageCacheMaxSize.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.addressesPageCacheMaxSize)) &&
        (this.clusterUser == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterUser == null : this.clusterUser.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterUser)) &&
        (this.clusterPassword == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterPassword == null : this.clusterPassword.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterPassword)) &&
        (this.clusterCallTimeout == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterCallTimeout == null : this.clusterCallTimeout.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterCallTimeout)) &&
        (this.clusterCallFailoverTimeout == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterCallFailoverTimeout == null : this.clusterCallFailoverTimeout.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterCallFailoverTimeout)) &&
        (this.clusterClientFailureCheckPeriod == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterClientFailureCheckPeriod == null : this.clusterClientFailureCheckPeriod.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterClientFailureCheckPeriod)) &&
        (this.clusterNotificationAttempts == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterNotificationAttempts == null : this.clusterNotificationAttempts.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterNotificationAttempts)) &&
        (this.clusterNotificationInterval == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterNotificationInterval == null : this.clusterNotificationInterval.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterNotificationInterval)) &&
        (this.idCacheSize == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.idCacheSize == null : this.idCacheSize.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.idCacheSize)) &&
        (this.clusterConfirmationWindowSize == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterConfirmationWindowSize == null : this.clusterConfirmationWindowSize.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterConfirmationWindowSize)) &&
        (this.clusterConnectionTtl == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterConnectionTtl == null : this.clusterConnectionTtl.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterConnectionTtl)) &&
        (this.clusterDuplicateDetection == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterDuplicateDetection == null : this.clusterDuplicateDetection.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterDuplicateDetection)) &&
        (this.clusterInitialConnectAttempts == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterInitialConnectAttempts == null : this.clusterInitialConnectAttempts.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterInitialConnectAttempts)) &&
        (this.clusterMaxRetryInterval == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterMaxRetryInterval == null : this.clusterMaxRetryInterval.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterMaxRetryInterval)) &&
        (this.clusterMinLargeMessageSize == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterMinLargeMessageSize == null : this.clusterMinLargeMessageSize.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterMinLargeMessageSize)) &&
        (this.clusterProducerWindowSize == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterProducerWindowSize == null : this.clusterProducerWindowSize.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterProducerWindowSize)) &&
        (this.clusterReconnectAttempts == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterReconnectAttempts == null : this.clusterReconnectAttempts.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterReconnectAttempts)) &&
        (this.clusterRetryInterval == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterRetryInterval == null : this.clusterRetryInterval.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterRetryInterval)) &&
        (this.clusterRetryIntervalMultiplier == null ? comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterRetryIntervalMultiplier == null : this.clusterRetryIntervalMultiplier.equals(comAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.clusterRetryIntervalMultiplier));
  }

  @Override
  public int hashCode() {
    int result = 17;
    result = 31 * result + (this.serviceRanking == null ? 0: this.serviceRanking.hashCode());
    result = 31 * result + (this.globalSize == null ? 0: this.globalSize.hashCode());
    result = 31 * result + (this.maxDiskUsage == null ? 0: this.maxDiskUsage.hashCode());
    result = 31 * result + (this.persistenceEnabled == null ? 0: this.persistenceEnabled.hashCode());
    result = 31 * result + (this.threadPoolMaxSize == null ? 0: this.threadPoolMaxSize.hashCode());
    result = 31 * result + (this.scheduledThreadPoolMaxSize == null ? 0: this.scheduledThreadPoolMaxSize.hashCode());
    result = 31 * result + (this.gracefulShutdownTimeout == null ? 0: this.gracefulShutdownTimeout.hashCode());
    result = 31 * result + (this.queues == null ? 0: this.queues.hashCode());
    result = 31 * result + (this.topics == null ? 0: this.topics.hashCode());
    result = 31 * result + (this.addressesMaxDeliveryAttempts == null ? 0: this.addressesMaxDeliveryAttempts.hashCode());
    result = 31 * result + (this.addressesExpiryDelay == null ? 0: this.addressesExpiryDelay.hashCode());
    result = 31 * result + (this.addressesAddressFullMessagePolicy == null ? 0: this.addressesAddressFullMessagePolicy.hashCode());
    result = 31 * result + (this.addressesMaxSizeBytes == null ? 0: this.addressesMaxSizeBytes.hashCode());
    result = 31 * result + (this.addressesPageSizeBytes == null ? 0: this.addressesPageSizeBytes.hashCode());
    result = 31 * result + (this.addressesPageCacheMaxSize == null ? 0: this.addressesPageCacheMaxSize.hashCode());
    result = 31 * result + (this.clusterUser == null ? 0: this.clusterUser.hashCode());
    result = 31 * result + (this.clusterPassword == null ? 0: this.clusterPassword.hashCode());
    result = 31 * result + (this.clusterCallTimeout == null ? 0: this.clusterCallTimeout.hashCode());
    result = 31 * result + (this.clusterCallFailoverTimeout == null ? 0: this.clusterCallFailoverTimeout.hashCode());
    result = 31 * result + (this.clusterClientFailureCheckPeriod == null ? 0: this.clusterClientFailureCheckPeriod.hashCode());
    result = 31 * result + (this.clusterNotificationAttempts == null ? 0: this.clusterNotificationAttempts.hashCode());
    result = 31 * result + (this.clusterNotificationInterval == null ? 0: this.clusterNotificationInterval.hashCode());
    result = 31 * result + (this.idCacheSize == null ? 0: this.idCacheSize.hashCode());
    result = 31 * result + (this.clusterConfirmationWindowSize == null ? 0: this.clusterConfirmationWindowSize.hashCode());
    result = 31 * result + (this.clusterConnectionTtl == null ? 0: this.clusterConnectionTtl.hashCode());
    result = 31 * result + (this.clusterDuplicateDetection == null ? 0: this.clusterDuplicateDetection.hashCode());
    result = 31 * result + (this.clusterInitialConnectAttempts == null ? 0: this.clusterInitialConnectAttempts.hashCode());
    result = 31 * result + (this.clusterMaxRetryInterval == null ? 0: this.clusterMaxRetryInterval.hashCode());
    result = 31 * result + (this.clusterMinLargeMessageSize == null ? 0: this.clusterMinLargeMessageSize.hashCode());
    result = 31 * result + (this.clusterProducerWindowSize == null ? 0: this.clusterProducerWindowSize.hashCode());
    result = 31 * result + (this.clusterReconnectAttempts == null ? 0: this.clusterReconnectAttempts.hashCode());
    result = 31 * result + (this.clusterRetryInterval == null ? 0: this.clusterRetryInterval.hashCode());
    result = 31 * result + (this.clusterRetryIntervalMultiplier == null ? 0: this.clusterRetryIntervalMultiplier.hashCode());
    return result;
  }

  @Override
  public String toString()  {
    StringBuilder sb = new StringBuilder();
    sb.append("class ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties {\n");
    
    sb.append("  serviceRanking: ").append(serviceRanking).append("\n");
    sb.append("  globalSize: ").append(globalSize).append("\n");
    sb.append("  maxDiskUsage: ").append(maxDiskUsage).append("\n");
    sb.append("  persistenceEnabled: ").append(persistenceEnabled).append("\n");
    sb.append("  threadPoolMaxSize: ").append(threadPoolMaxSize).append("\n");
    sb.append("  scheduledThreadPoolMaxSize: ").append(scheduledThreadPoolMaxSize).append("\n");
    sb.append("  gracefulShutdownTimeout: ").append(gracefulShutdownTimeout).append("\n");
    sb.append("  queues: ").append(queues).append("\n");
    sb.append("  topics: ").append(topics).append("\n");
    sb.append("  addressesMaxDeliveryAttempts: ").append(addressesMaxDeliveryAttempts).append("\n");
    sb.append("  addressesExpiryDelay: ").append(addressesExpiryDelay).append("\n");
    sb.append("  addressesAddressFullMessagePolicy: ").append(addressesAddressFullMessagePolicy).append("\n");
    sb.append("  addressesMaxSizeBytes: ").append(addressesMaxSizeBytes).append("\n");
    sb.append("  addressesPageSizeBytes: ").append(addressesPageSizeBytes).append("\n");
    sb.append("  addressesPageCacheMaxSize: ").append(addressesPageCacheMaxSize).append("\n");
    sb.append("  clusterUser: ").append(clusterUser).append("\n");
    sb.append("  clusterPassword: ").append(clusterPassword).append("\n");
    sb.append("  clusterCallTimeout: ").append(clusterCallTimeout).append("\n");
    sb.append("  clusterCallFailoverTimeout: ").append(clusterCallFailoverTimeout).append("\n");
    sb.append("  clusterClientFailureCheckPeriod: ").append(clusterClientFailureCheckPeriod).append("\n");
    sb.append("  clusterNotificationAttempts: ").append(clusterNotificationAttempts).append("\n");
    sb.append("  clusterNotificationInterval: ").append(clusterNotificationInterval).append("\n");
    sb.append("  idCacheSize: ").append(idCacheSize).append("\n");
    sb.append("  clusterConfirmationWindowSize: ").append(clusterConfirmationWindowSize).append("\n");
    sb.append("  clusterConnectionTtl: ").append(clusterConnectionTtl).append("\n");
    sb.append("  clusterDuplicateDetection: ").append(clusterDuplicateDetection).append("\n");
    sb.append("  clusterInitialConnectAttempts: ").append(clusterInitialConnectAttempts).append("\n");
    sb.append("  clusterMaxRetryInterval: ").append(clusterMaxRetryInterval).append("\n");
    sb.append("  clusterMinLargeMessageSize: ").append(clusterMinLargeMessageSize).append("\n");
    sb.append("  clusterProducerWindowSize: ").append(clusterProducerWindowSize).append("\n");
    sb.append("  clusterReconnectAttempts: ").append(clusterReconnectAttempts).append("\n");
    sb.append("  clusterRetryInterval: ").append(clusterRetryInterval).append("\n");
    sb.append("  clusterRetryIntervalMultiplier: ").append(clusterRetryIntervalMultiplier).append("\n");
    sb.append("}\n");
    return sb.toString();
  }
}
