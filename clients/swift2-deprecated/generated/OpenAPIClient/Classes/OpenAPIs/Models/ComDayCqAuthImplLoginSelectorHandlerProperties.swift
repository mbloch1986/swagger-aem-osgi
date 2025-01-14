//
// ComDayCqAuthImplLoginSelectorHandlerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComDayCqAuthImplLoginSelectorHandlerProperties: JSONEncodable {
    public var path: ConfigNodePropertyString?
    public var serviceRanking: ConfigNodePropertyInteger?
    public var authLoginselectorMappings: ConfigNodePropertyArray?
    public var authLoginselectorChangepwMappings: ConfigNodePropertyArray?
    public var authLoginselectorDefaultloginpage: ConfigNodePropertyString?
    public var authLoginselectorDefaultchangepwpage: ConfigNodePropertyString?
    public var authLoginselectorHandle: ConfigNodePropertyArray?
    public var authLoginselectorHandleAllExtensions: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["path"] = self.path?.encodeToJSON()
        nillableDictionary["service.ranking"] = self.serviceRanking?.encodeToJSON()
        nillableDictionary["auth.loginselector.mappings"] = self.authLoginselectorMappings?.encodeToJSON()
        nillableDictionary["auth.loginselector.changepw.mappings"] = self.authLoginselectorChangepwMappings?.encodeToJSON()
        nillableDictionary["auth.loginselector.defaultloginpage"] = self.authLoginselectorDefaultloginpage?.encodeToJSON()
        nillableDictionary["auth.loginselector.defaultchangepwpage"] = self.authLoginselectorDefaultchangepwpage?.encodeToJSON()
        nillableDictionary["auth.loginselector.handle"] = self.authLoginselectorHandle?.encodeToJSON()
        nillableDictionary["auth.loginselector.handle.all.extensions"] = self.authLoginselectorHandleAllExtensions?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
