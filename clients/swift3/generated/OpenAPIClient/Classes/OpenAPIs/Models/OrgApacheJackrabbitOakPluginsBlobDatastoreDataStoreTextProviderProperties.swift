//
// OrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


open class OrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderProperties: JSONEncodable {

    public var dir: ConfigNodePropertyString?

    public init() {}

    // MARK: JSONEncodable
    open func encodeToJSON() -> Any {
        var nillableDictionary = [String:Any?]()
        nillableDictionary["dir"] = self.dir?.encodeToJSON()

        let dictionary: [String:Any] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}

