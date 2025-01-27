//
// ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties.swift
//
// Generated by openapi-generator
// https://openapi-generator.tech
//

import Foundation


public class ComAdobeGraniteUiClientlibsImplHtmlLibraryManagerImplProperties: JSONEncodable {
    public var htmllibmanagerTiming: ConfigNodePropertyBoolean?
    public var htmllibmanagerDebugInitJs: ConfigNodePropertyString?
    public var htmllibmanagerMinify: ConfigNodePropertyBoolean?
    public var htmllibmanagerDebug: ConfigNodePropertyBoolean?
    public var htmllibmanagerGzip: ConfigNodePropertyBoolean?
    public var htmllibmanagerMaxDataUriSize: ConfigNodePropertyInteger?
    public var htmllibmanagerMaxage: ConfigNodePropertyInteger?
    public var htmllibmanagerForceCQUrlInfo: ConfigNodePropertyBoolean?
    public var htmllibmanagerDefaultthemename: ConfigNodePropertyString?
    public var htmllibmanagerDefaultuserthemename: ConfigNodePropertyString?
    public var htmllibmanagerClientmanager: ConfigNodePropertyString?
    public var htmllibmanagerPathList: ConfigNodePropertyArray?
    public var htmllibmanagerExcludedPathList: ConfigNodePropertyArray?
    public var htmllibmanagerProcessorJs: ConfigNodePropertyArray?
    public var htmllibmanagerProcessorCss: ConfigNodePropertyArray?
    public var htmllibmanagerLongcachePatterns: ConfigNodePropertyArray?
    public var htmllibmanagerLongcacheFormat: ConfigNodePropertyString?
    public var htmllibmanagerUseFileSystemOutputCache: ConfigNodePropertyBoolean?
    public var htmllibmanagerFileSystemOutputCacheLocation: ConfigNodePropertyString?
    public var htmllibmanagerDisableReplacement: ConfigNodePropertyArray?

    public init() {}

    // MARK: JSONEncodable
    func encodeToJSON() -> AnyObject {
        var nillableDictionary = [String:AnyObject?]()
        nillableDictionary["htmllibmanager.timing"] = self.htmllibmanagerTiming?.encodeToJSON()
        nillableDictionary["htmllibmanager.debug.init.js"] = self.htmllibmanagerDebugInitJs?.encodeToJSON()
        nillableDictionary["htmllibmanager.minify"] = self.htmllibmanagerMinify?.encodeToJSON()
        nillableDictionary["htmllibmanager.debug"] = self.htmllibmanagerDebug?.encodeToJSON()
        nillableDictionary["htmllibmanager.gzip"] = self.htmllibmanagerGzip?.encodeToJSON()
        nillableDictionary["htmllibmanager.maxDataUriSize"] = self.htmllibmanagerMaxDataUriSize?.encodeToJSON()
        nillableDictionary["htmllibmanager.maxage"] = self.htmllibmanagerMaxage?.encodeToJSON()
        nillableDictionary["htmllibmanager.forceCQUrlInfo"] = self.htmllibmanagerForceCQUrlInfo?.encodeToJSON()
        nillableDictionary["htmllibmanager.defaultthemename"] = self.htmllibmanagerDefaultthemename?.encodeToJSON()
        nillableDictionary["htmllibmanager.defaultuserthemename"] = self.htmllibmanagerDefaultuserthemename?.encodeToJSON()
        nillableDictionary["htmllibmanager.clientmanager"] = self.htmllibmanagerClientmanager?.encodeToJSON()
        nillableDictionary["htmllibmanager.path.list"] = self.htmllibmanagerPathList?.encodeToJSON()
        nillableDictionary["htmllibmanager.excluded.path.list"] = self.htmllibmanagerExcludedPathList?.encodeToJSON()
        nillableDictionary["htmllibmanager.processor.js"] = self.htmllibmanagerProcessorJs?.encodeToJSON()
        nillableDictionary["htmllibmanager.processor.css"] = self.htmllibmanagerProcessorCss?.encodeToJSON()
        nillableDictionary["htmllibmanager.longcache.patterns"] = self.htmllibmanagerLongcachePatterns?.encodeToJSON()
        nillableDictionary["htmllibmanager.longcache.format"] = self.htmllibmanagerLongcacheFormat?.encodeToJSON()
        nillableDictionary["htmllibmanager.useFileSystemOutputCache"] = self.htmllibmanagerUseFileSystemOutputCache?.encodeToJSON()
        nillableDictionary["htmllibmanager.fileSystemOutputCacheLocation"] = self.htmllibmanagerFileSystemOutputCacheLocation?.encodeToJSON()
        nillableDictionary["htmllibmanager.disable.replacement"] = self.htmllibmanagerDisableReplacement?.encodeToJSON()
        let dictionary: [String:AnyObject] = APIHelper.rejectNil(nillableDictionary) ?? [:]
        return dictionary
    }
}
