//
// OrgApacheSlingResourcemergerImplMergedResourceProviderFactoryProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class OrgApacheSlingResourcemergerImplMergedResourceProviderFactoryProperties: JSONEncodable {

    public var mergeRoot: ConfigNodePropertyString?
    public var mergeReadOnly: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["merge.root"] = self.mergeRoot?.encodeToJSON()
        nillableDictionary["merge.readOnly"] = self.mergeReadOnly?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

