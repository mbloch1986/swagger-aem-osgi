//
// OrgApacheSlingHcCoreImplServletHealthCheckExecutorServletProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class OrgApacheSlingHcCoreImplServletHealthCheckExecutorServletProperties: JSONEncodable {
    public var servletPath: ConfigNodePropertyString?
    public var disabled: ConfigNodePropertyBoolean?
    public var corsAccessControlAllowOrigin: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["servletPath"] = self.servletPath?.encodeToJSON()
        nillableDictionary["disabled"] = self.disabled?.encodeToJSON()
        nillableDictionary["cors.accessControlAllowOrigin"] = self.corsAccessControlAllowOrigin?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}