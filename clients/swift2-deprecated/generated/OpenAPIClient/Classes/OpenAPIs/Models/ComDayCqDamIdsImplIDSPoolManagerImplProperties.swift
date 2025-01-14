//
// ComDayCqDamIdsImplIDSPoolManagerImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqDamIdsImplIDSPoolManagerImplProperties: JSONEncodable {
    public var maxErrorsToBlacklist: ConfigNodePropertyInteger?
    public var retryIntervalToWhitelist: ConfigNodePropertyInteger?
    public var connectTimeout: ConfigNodePropertyInteger?
    public var socketTimeout: ConfigNodePropertyInteger?
    public var processLabel: ConfigNodePropertyString?
    public var connectionUseMax: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["max.errors.to.blacklist"] = self.maxErrorsToBlacklist?.encodeToJSON()
        nillableDictionary["retry.interval.to.whitelist"] = self.retryIntervalToWhitelist?.encodeToJSON()
        nillableDictionary["connect.timeout"] = self.connectTimeout?.encodeToJSON()
        nillableDictionary["socket.timeout"] = self.socketTimeout?.encodeToJSON()
        nillableDictionary["process.label"] = self.processLabel?.encodeToJSON()
        nillableDictionary["connection.use.max"] = self.connectionUseMax?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
