//
// OrgApacheSlingDiscoveryOakConfigProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class OrgApacheSlingDiscoveryOakConfigProperties: JSONEncodable {
    public var connectorPingTimeout: ConfigNodePropertyInteger?
    public var connectorPingInterval: ConfigNodePropertyInteger?
    public var discoveryLiteCheckInterval: ConfigNodePropertyInteger?
    public var clusterSyncServiceTimeout: ConfigNodePropertyInteger?
    public var clusterSyncServiceInterval: ConfigNodePropertyInteger?
    public var enableSyncToken: ConfigNodePropertyBoolean?
    public var minEventDelay: ConfigNodePropertyInteger?
    public var socketConnectTimeout: ConfigNodePropertyInteger?
    public var soTimeout: ConfigNodePropertyInteger?
    public var topologyConnectorUrls: ConfigNodePropertyArray?
    public var topologyConnectorWhitelist: ConfigNodePropertyArray?
    public var autoStopLocalLoopEnabled: ConfigNodePropertyBoolean?
    public var gzipConnectorRequestsEnabled: ConfigNodePropertyBoolean?
    public var hmacEnabled: ConfigNodePropertyBoolean?
    public var enableEncryption: ConfigNodePropertyBoolean?
    public var sharedKey: ConfigNodePropertyString?
    public var hmacSharedKeyTTL: ConfigNodePropertyInteger?
    public var backoffStandbyFactor: ConfigNodePropertyString?
    public var backoffStableFactor: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["connectorPingTimeout"] = self.connectorPingTimeout?.encodeToJSON()
        nillableDictionary["connectorPingInterval"] = self.connectorPingInterval?.encodeToJSON()
        nillableDictionary["discoveryLiteCheckInterval"] = self.discoveryLiteCheckInterval?.encodeToJSON()
        nillableDictionary["clusterSyncServiceTimeout"] = self.clusterSyncServiceTimeout?.encodeToJSON()
        nillableDictionary["clusterSyncServiceInterval"] = self.clusterSyncServiceInterval?.encodeToJSON()
        nillableDictionary["enableSyncToken"] = self.enableSyncToken?.encodeToJSON()
        nillableDictionary["minEventDelay"] = self.minEventDelay?.encodeToJSON()
        nillableDictionary["socketConnectTimeout"] = self.socketConnectTimeout?.encodeToJSON()
        nillableDictionary["soTimeout"] = self.soTimeout?.encodeToJSON()
        nillableDictionary["topologyConnectorUrls"] = self.topologyConnectorUrls?.encodeToJSON()
        nillableDictionary["topologyConnectorWhitelist"] = self.topologyConnectorWhitelist?.encodeToJSON()
        nillableDictionary["autoStopLocalLoopEnabled"] = self.autoStopLocalLoopEnabled?.encodeToJSON()
        nillableDictionary["gzipConnectorRequestsEnabled"] = self.gzipConnectorRequestsEnabled?.encodeToJSON()
        nillableDictionary["hmacEnabled"] = self.hmacEnabled?.encodeToJSON()
        nillableDictionary["enableEncryption"] = self.enableEncryption?.encodeToJSON()
        nillableDictionary["sharedKey"] = self.sharedKey?.encodeToJSON()
        nillableDictionary["hmacSharedKeyTTL"] = self.hmacSharedKeyTTL?.encodeToJSON()
        nillableDictionary["backoffStandbyFactor"] = self.backoffStandbyFactor?.encodeToJSON()
        nillableDictionary["backoffStableFactor"] = self.backoffStableFactor?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
