//
// OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class OrgApacheSlingInstallerProviderJcrImplJcrInstallerProperties: JSONEncodable {
    public var handlerSchemes: ConfigNodePropertyArray?
    public var slingJcrinstallFolderNameRegexp: ConfigNodePropertyString?
    public var slingJcrinstallFolderMaxDepth: ConfigNodePropertyInteger?
    public var slingJcrinstallSearchPath: ConfigNodePropertyArray?
    public var slingJcrinstallNewConfigPath: ConfigNodePropertyString?
    public var slingJcrinstallSignalPath: ConfigNodePropertyString?
    public var slingJcrinstallEnableWriteback: ConfigNodePropertyBoolean?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["handler.schemes"] = self.handlerSchemes?.encodeToJSON()
        nillableDictionary["sling.jcrinstall.folder.name.regexp"] = self.slingJcrinstallFolderNameRegexp?.encodeToJSON()
        nillableDictionary["sling.jcrinstall.folder.max.depth"] = self.slingJcrinstallFolderMaxDepth?.encodeToJSON()
        nillableDictionary["sling.jcrinstall.search.path"] = self.slingJcrinstallSearchPath?.encodeToJSON()
        nillableDictionary["sling.jcrinstall.new.config.path"] = self.slingJcrinstallNewConfigPath?.encodeToJSON()
        nillableDictionary["sling.jcrinstall.signal.path"] = self.slingJcrinstallSignalPath?.encodeToJSON()
        nillableDictionary["sling.jcrinstall.enable.writeback"] = self.slingJcrinstallEnableWriteback?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
