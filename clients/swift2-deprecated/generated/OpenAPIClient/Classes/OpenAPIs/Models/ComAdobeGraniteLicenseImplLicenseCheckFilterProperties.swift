//
// ComAdobeGraniteLicenseImplLicenseCheckFilterProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeGraniteLicenseImplLicenseCheckFilterProperties: JSONEncodable {
    public var checkInternval: ConfigNodePropertyInteger?
    public var excludeIds: ConfigNodePropertyArray?
    public var encryptPing: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["checkInternval"] = self.checkInternval?.encodeToJSON()
        nillableDictionary["excludeIds"] = self.excludeIds?.encodeToJSON()
        nillableDictionary["encryptPing"] = self.encryptPing?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
