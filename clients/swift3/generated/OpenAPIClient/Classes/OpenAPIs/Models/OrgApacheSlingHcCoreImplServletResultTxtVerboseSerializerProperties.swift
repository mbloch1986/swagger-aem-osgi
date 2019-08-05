//
// OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class OrgApacheSlingHcCoreImplServletResultTxtVerboseSerializerProperties: JSONEncodable {

    public var totalWidth: ConfigNodePropertyInteger?
    public var colWidthName: ConfigNodePropertyInteger?
    public var colWidthResult: ConfigNodePropertyInteger?
    public var colWidthTiming: ConfigNodePropertyInteger?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["totalWidth"] = self.totalWidth?.encodeToJSON()
        nillableDictionary["colWidthName"] = self.colWidthName?.encodeToJSON()
        nillableDictionary["colWidthResult"] = self.colWidthResult?.encodeToJSON()
        nillableDictionary["colWidthTiming"] = self.colWidthTiming?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
