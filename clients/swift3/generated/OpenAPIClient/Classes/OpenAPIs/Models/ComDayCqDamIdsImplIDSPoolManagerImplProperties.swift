//
// ComDayCqDamIdsImplIDSPoolManagerImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class ComDayCqDamIdsImplIDSPoolManagerImplProperties: JSONEncodable {

    public var maxErrorsToBlacklist: ConfigNodePropertyInteger?
    public var retryIntervalToWhitelist: ConfigNodePropertyInteger?
    public var connectTimeout: ConfigNodePropertyInteger?
    public var socketTimeout: ConfigNodePropertyInteger?
    public var processLabel: ConfigNodePropertyString?
    public var connectionUseMax: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["max.errors.to.blacklist"] = self.maxErrorsToBlacklist?.encodeToJSON()
        nillableDictionary["retry.interval.to.whitelist"] = self.retryIntervalToWhitelist?.encodeToJSON()
        nillableDictionary["connect.timeout"] = self.connectTimeout?.encodeToJSON()
        nillableDictionary["socket.timeout"] = self.socketTimeout?.encodeToJSON()
        nillableDictionary["process.label"] = self.processLabel?.encodeToJSON()
        nillableDictionary["connection.use.max"] = self.connectionUseMax?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

