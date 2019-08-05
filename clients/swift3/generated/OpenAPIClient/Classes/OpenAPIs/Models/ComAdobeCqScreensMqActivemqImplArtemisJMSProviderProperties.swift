//
// ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComAdobeCqScreensMqActivemqImplArtemisJMSProviderProperties: JSONEncodable {

    public var serviceRanking: ConfigNodePropertyInteger?
    public var globalSize: ConfigNodePropertyInteger?
    public var maxDiskUsage: ConfigNodePropertyInteger?
    public var persistenceEnabled: ConfigNodePropertyBoolean?
    public var threadPoolMaxSize: ConfigNodePropertyInteger?
    public var scheduledThreadPoolMaxSize: ConfigNodePropertyInteger?
    public var gracefulShutdownTimeout: ConfigNodePropertyInteger?
    public var queues: ConfigNodePropertyArray?
    public var topics: ConfigNodePropertyArray?
    public var addressesMaxDeliveryAttempts: ConfigNodePropertyInteger?
    public var addressesExpiryDelay: ConfigNodePropertyInteger?
    public var addressesAddressFullMessagePolicy: ConfigNodePropertyDropDown?
    public var addressesMaxSizeBytes: ConfigNodePropertyInteger?
    public var addressesPageSizeBytes: ConfigNodePropertyInteger?
    public var addressesPageCacheMaxSize: ConfigNodePropertyInteger?
    public var clusterUser: ConfigNodePropertyString?
    public var clusterPassword: ConfigNodePropertyString?
    public var clusterCallTimeout: ConfigNodePropertyInteger?
    public var clusterCallFailoverTimeout: ConfigNodePropertyInteger?
    public var clusterClientFailureCheckPeriod: ConfigNodePropertyInteger?
    public var clusterNotificationAttempts: ConfigNodePropertyInteger?
    public var clusterNotificationInterval: ConfigNodePropertyInteger?
    public var idCacheSize: ConfigNodePropertyInteger?
    public var clusterConfirmationWindowSize: ConfigNodePropertyInteger?
    public var clusterConnectionTtl: ConfigNodePropertyInteger?
    public var clusterDuplicateDetection: ConfigNodePropertyBoolean?
    public var clusterInitialConnectAttempts: ConfigNodePropertyInteger?
    public var clusterMaxRetryInterval: ConfigNodePropertyInteger?
    public var clusterMinLargeMessageSize: ConfigNodePropertyInteger?
    public var clusterProducerWindowSize: ConfigNodePropertyInteger?
    public var clusterReconnectAttempts: ConfigNodePropertyInteger?
    public var clusterRetryInterval: ConfigNodePropertyInteger?
    public var clusterRetryIntervalMultiplier: ConfigNodePropertyFloat?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["service.ranking"] = self.serviceRanking?.encodeToJSON()
        nillableDictionary["global.size"] = self.globalSize?.encodeToJSON()
        nillableDictionary["max.disk.usage"] = self.maxDiskUsage?.encodeToJSON()
        nillableDictionary["persistence.enabled"] = self.persistenceEnabled?.encodeToJSON()
        nillableDictionary["thread.pool.max.size"] = self.threadPoolMaxSize?.encodeToJSON()
        nillableDictionary["scheduled.thread.pool.max.size"] = self.scheduledThreadPoolMaxSize?.encodeToJSON()
        nillableDictionary["graceful.shutdown.timeout"] = self.gracefulShutdownTimeout?.encodeToJSON()
        nillableDictionary["queues"] = self.queues?.encodeToJSON()
        nillableDictionary["topics"] = self.topics?.encodeToJSON()
        nillableDictionary["addresses.max.delivery.attempts"] = self.addressesMaxDeliveryAttempts?.encodeToJSON()
        nillableDictionary["addresses.expiry.delay"] = self.addressesExpiryDelay?.encodeToJSON()
        nillableDictionary["addresses.address.full.message.policy"] = self.addressesAddressFullMessagePolicy?.encodeToJSON()
        nillableDictionary["addresses.max.size.bytes"] = self.addressesMaxSizeBytes?.encodeToJSON()
        nillableDictionary["addresses.page.size.bytes"] = self.addressesPageSizeBytes?.encodeToJSON()
        nillableDictionary["addresses.page.cache.max.size"] = self.addressesPageCacheMaxSize?.encodeToJSON()
        nillableDictionary["cluster.user"] = self.clusterUser?.encodeToJSON()
        nillableDictionary["cluster.password"] = self.clusterPassword?.encodeToJSON()
        nillableDictionary["cluster.call.timeout"] = self.clusterCallTimeout?.encodeToJSON()
        nillableDictionary["cluster.call.failover.timeout"] = self.clusterCallFailoverTimeout?.encodeToJSON()
        nillableDictionary["cluster.client.failure.check.period"] = self.clusterClientFailureCheckPeriod?.encodeToJSON()
        nillableDictionary["cluster.notification.attempts"] = self.clusterNotificationAttempts?.encodeToJSON()
        nillableDictionary["cluster.notification.interval"] = self.clusterNotificationInterval?.encodeToJSON()
        nillableDictionary["id.cache.size"] = self.idCacheSize?.encodeToJSON()
        nillableDictionary["cluster.confirmation.window.size"] = self.clusterConfirmationWindowSize?.encodeToJSON()
        nillableDictionary["cluster.connection.ttl"] = self.clusterConnectionTtl?.encodeToJSON()
        nillableDictionary["cluster.duplicate.detection"] = self.clusterDuplicateDetection?.encodeToJSON()
        nillableDictionary["cluster.initial.connect.attempts"] = self.clusterInitialConnectAttempts?.encodeToJSON()
        nillableDictionary["cluster.max.retry.interval"] = self.clusterMaxRetryInterval?.encodeToJSON()
        nillableDictionary["cluster.min.large.message.size"] = self.clusterMinLargeMessageSize?.encodeToJSON()
        nillableDictionary["cluster.producer.window.size"] = self.clusterProducerWindowSize?.encodeToJSON()
        nillableDictionary["cluster.reconnect.attempts"] = self.clusterReconnectAttempts?.encodeToJSON()
        nillableDictionary["cluster.retry.interval"] = self.clusterRetryInterval?.encodeToJSON()
        nillableDictionary["cluster.retry.interval.multiplier"] = self.clusterRetryIntervalMultiplier?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
