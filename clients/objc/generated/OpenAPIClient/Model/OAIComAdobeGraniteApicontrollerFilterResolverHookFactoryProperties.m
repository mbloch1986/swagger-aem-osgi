#import "OAIComAdobeGraniteApicontrollerFilterResolverHookFactoryProperties.h"

@implementation OAIComAdobeGraniteApicontrollerFilterResolverHookFactoryProperties

- (instancetype)init {
  self = [super init];
  if (self) {
    // initialize property's default value, if any
    
  }
  return self;
}


/**
 * Maps json key to property name.
 * This method is used by `JSONModel`.
 */
+ (JSONKeyMapper *)keyMapper {
  return [[JSONKeyMapper alloc] initWithModelToJSONDictionary:@{ @"comAdobeCqCdnCdnRewriter": @"com.adobe.cq.cdn.cdn-rewriter", @"comAdobeCqCloudConfigComponents": @"com.adobe.cq.cloud-config.components", @"comAdobeCqCloudConfigCore": @"com.adobe.cq.cloud-config.core", @"comAdobeCqCloudConfigUi": @"com.adobe.cq.cloud-config.ui", @"comAdobeCqComAdobeCqEditor": @"com.adobe.cq.com.adobe.cq.editor", @"comAdobeCqComAdobeCqProjectsCore": @"com.adobe.cq.com.adobe.cq.projects.core", @"comAdobeCqComAdobeCqProjectsWcmCore": @"com.adobe.cq.com.adobe.cq.projects.wcm.core", @"comAdobeCqComAdobeCqUiCommons": @"com.adobe.cq.com.adobe.cq.ui.commons", @"comAdobeCqComAdobeCqWcmStyle": @"com.adobe.cq.com.adobe.cq.wcm.style", @"comAdobeCqCqActivitymapIntegration": @"com.adobe.cq.cq-activitymap-integration", @"comAdobeCqCqContexthubCommons": @"com.adobe.cq.cq-contexthub-commons", @"comAdobeCqCqDtm": @"com.adobe.cq.cq-dtm", @"comAdobeCqCqHealthcheck": @"com.adobe.cq.cq-healthcheck", @"comAdobeCqCqMultisiteTargeting": @"com.adobe.cq.cq-multisite-targeting", @"comAdobeCqCqPreUpgradeCleanup": @"com.adobe.cq.cq-pre-upgrade-cleanup", @"comAdobeCqCqProductInfoProvider": @"com.adobe.cq.cq-product-info-provider", @"comAdobeCqCqRestSites": @"com.adobe.cq.cq-rest-sites", @"comAdobeCqCqSecurityHc": @"com.adobe.cq.cq-security-hc", @"comAdobeCqDamCqDamSvgHandler": @"com.adobe.cq.dam.cq-dam-svg-handler", @"comAdobeCqDamCqScene7Imaging": @"com.adobe.cq.dam.cq-scene7-imaging", @"comAdobeCqDtmReactorCore": @"com.adobe.cq.dtm-reactor.core", @"comAdobeCqDtmReactorUi": @"com.adobe.cq.dtm-reactor.ui", @"comAdobeCqExpJspelResolver": @"com.adobe.cq.exp-jspel-resolver", @"comAdobeCqInboxCqInbox": @"com.adobe.cq.inbox.cq-inbox", @"comAdobeCqJsonSchemaParser": @"com.adobe.cq.json-schema-parser", @"comAdobeCqMediaCqMediaPublishingDpsFpCore": @"com.adobe.cq.media.cq-media-publishing-dps-fp-core", @"comAdobeCqMobileCqMobileCaas": @"com.adobe.cq.mobile.cq-mobile-caas", @"comAdobeCqMobileCqMobileIndexBuilder": @"com.adobe.cq.mobile.cq-mobile-index-builder", @"comAdobeCqMobileCqMobilePhonegapBuild": @"com.adobe.cq.mobile.cq-mobile-phonegap-build", @"comAdobeCqMyspell": @"com.adobe.cq.myspell", @"comAdobeCqSampleWeRetailCore": @"com.adobe.cq.sample.we.retail.core", @"comAdobeCqScreensComAdobeCqScreensDcc": @"com.adobe.cq.screens.com.adobe.cq.screens.dcc", @"comAdobeCqScreensComAdobeCqScreensMqCore": @"com.adobe.cq.screens.com.adobe.cq.screens.mq.core", @"comAdobeCqSocialCqSocialAsProvider": @"com.adobe.cq.social.cq-social-as-provider", @"comAdobeCqSocialCqSocialBadgingBasicImpl": @"com.adobe.cq.social.cq-social-badging-basic-impl", @"comAdobeCqSocialCqSocialBadgingImpl": @"com.adobe.cq.social.cq-social-badging-impl", @"comAdobeCqSocialCqSocialCalendarImpl": @"com.adobe.cq.social.cq-social-calendar-impl", @"comAdobeCqSocialCqSocialContentFragmentsImpl": @"com.adobe.cq.social.cq-social-content-fragments-impl", @"comAdobeCqSocialCqSocialEnablementImpl": @"com.adobe.cq.social.cq-social-enablement-impl", @"comAdobeCqSocialCqSocialGraphImpl": @"com.adobe.cq.social.cq-social-graph-impl", @"comAdobeCqSocialCqSocialIdeationImpl": @"com.adobe.cq.social.cq-social-ideation-impl", @"comAdobeCqSocialCqSocialJcrProvider": @"com.adobe.cq.social.cq-social-jcr-provider", @"comAdobeCqSocialCqSocialMembersImpl": @"com.adobe.cq.social.cq-social-members-impl", @"comAdobeCqSocialCqSocialMsProvider": @"com.adobe.cq.social.cq-social-ms-provider", @"comAdobeCqSocialCqSocialNotificationsChannelsWeb": @"com.adobe.cq.social.cq-social-notifications-channels-web", @"comAdobeCqSocialCqSocialNotificationsImpl": @"com.adobe.cq.social.cq-social-notifications-impl", @"comAdobeCqSocialCqSocialRdbProvider": @"com.adobe.cq.social.cq-social-rdb-provider", @"comAdobeCqSocialCqSocialScfImpl": @"com.adobe.cq.social.cq-social-scf-impl", @"comAdobeCqSocialCqSocialScoringBasicImpl": @"com.adobe.cq.social.cq-social-scoring-basic-impl", @"comAdobeCqSocialCqSocialScoringImpl": @"com.adobe.cq.social.cq-social-scoring-impl", @"comAdobeCqSocialCqSocialServiceusersImpl": @"com.adobe.cq.social.cq-social-serviceusers-impl", @"comAdobeCqSocialCqSocialSrpImpl": @"com.adobe.cq.social.cq-social-srp-impl", @"comAdobeCqSocialCqSocialUgcbaseImpl": @"com.adobe.cq.social.cq-social-ugcbase-impl", @"comAdobeDamCqDamCfmImpl": @"com.adobe.dam.cq-dam-cfm-impl", @"comAdobeFormsFoundationFormsFoundationBase": @"com.adobe.forms.foundation-forms-foundation-base", @"comAdobeGraniteApicontroller": @"com.adobe.granite.apicontroller", @"comAdobeGraniteAssetCore": @"com.adobe.granite.asset.core", @"comAdobeGraniteAuthSso": @"com.adobe.granite.auth.sso", @"comAdobeGraniteBundlesHcImpl": @"com.adobe.granite.bundles.hc.impl", @"comAdobeGraniteCompatRouter": @"com.adobe.granite.compat-router", @"comAdobeGraniteConf": @"com.adobe.granite.conf", @"comAdobeGraniteConfUiCore": @"com.adobe.granite.conf.ui.core", @"comAdobeGraniteCors": @"com.adobe.granite.cors", @"comAdobeGraniteCrxExplorer": @"com.adobe.granite.crx-explorer", @"comAdobeGraniteCrxdeLite": @"com.adobe.granite.crxde-lite", @"comAdobeGraniteCryptoConfig": @"com.adobe.granite.crypto.config", @"comAdobeGraniteCryptoExtension": @"com.adobe.granite.crypto.extension", @"comAdobeGraniteCryptoFile": @"com.adobe.granite.crypto.file", @"comAdobeGraniteCryptoJcr": @"com.adobe.granite.crypto.jcr", @"comAdobeGraniteCsrf": @"com.adobe.granite.csrf", @"comAdobeGraniteDistributionCore": @"com.adobe.granite.distribution.core", @"comAdobeGraniteDropwizardMetrics": @"com.adobe.granite.dropwizard.metrics", @"comAdobeGraniteFragsImpl": @"com.adobe.granite.frags.impl", @"comAdobeGraniteGibson": @"com.adobe.granite.gibson", @"comAdobeGraniteInfocollector": @"com.adobe.granite.infocollector", @"comAdobeGraniteInstallerFactoryPackages": @"com.adobe.granite.installer.factory.packages", @"comAdobeGraniteJettySsl": @"com.adobe.granite.jetty.ssl", @"comAdobeGraniteJobsAsync": @"com.adobe.granite.jobs.async", @"comAdobeGraniteMaintenanceOak": @"com.adobe.granite.maintenance.oak", @"comAdobeGraniteMonitoringCore": @"com.adobe.granite.monitoring.core", @"comAdobeGraniteQueries": @"com.adobe.granite.queries", @"comAdobeGraniteReplicationHcImpl": @"com.adobe.granite.replication.hc.impl", @"comAdobeGraniteRepositoryChecker": @"com.adobe.granite.repository.checker", @"comAdobeGraniteRepositoryHcImpl": @"com.adobe.granite.repository.hc.impl", @"comAdobeGraniteRestAssets": @"com.adobe.granite.rest.assets", @"comAdobeGraniteSecurityUi": @"com.adobe.granite.security.ui", @"comAdobeGraniteStartup": @"com.adobe.granite.startup", @"comAdobeGraniteTagsoup": @"com.adobe.granite.tagsoup", @"comAdobeGraniteTaskmanagementCore": @"com.adobe.granite.taskmanagement.core", @"comAdobeGraniteTaskmanagementWorkflow": @"com.adobe.granite.taskmanagement.workflow", @"comAdobeGraniteUiClientlibsCompilerLess": @"com.adobe.granite.ui.clientlibs.compiler.less", @"comAdobeGraniteUiClientlibsProcessorGcc": @"com.adobe.granite.ui.clientlibs.processor.gcc", @"comAdobeGraniteWebconsolePlugins": @"com.adobe.granite.webconsole.plugins", @"comAdobeGraniteWorkflowConsole": @"com.adobe.granite.workflow.console", @"comAdobeXmpWorkerFilesNativeFragmentLinux": @"com.adobe.xmp.worker.files.native.fragment.linux", @"comAdobeXmpWorkerFilesNativeFragmentMacosx": @"com.adobe.xmp.worker.files.native.fragment.macosx", @"comAdobeXmpWorkerFilesNativeFragmentWin": @"com.adobe.xmp.worker.files.native.fragment.win", @"comDayCommonsOsgiWrapperSimpleJndi": @"com.day.commons.osgi.wrapper.simple-jndi", @"comDayCqCqAuthhandler": @"com.day.cq.cq-authhandler", @"comDayCqCqCompatConfigupdate": @"com.day.cq.cq-compat-configupdate", @"comDayCqCqLicensebranding": @"com.day.cq.cq-licensebranding", @"comDayCqCqNotifcationImpl": @"com.day.cq.cq-notifcation-impl", @"comDayCqCqReplicationAudit": @"com.day.cq.cq-replication-audit", @"comDayCqCqSearchExt": @"com.day.cq.cq-search-ext", @"comDayCqDamCqDamAnnotationPrint": @"com.day.cq.dam.cq-dam-annotation-print", @"comDayCqDamCqDamAssetUsage": @"com.day.cq.dam.cq-dam-asset-usage", @"comDayCqDamCqDamS7dam": @"com.day.cq.dam.cq-dam-s7dam", @"comDayCqDamCqDamSimilaritysearch": @"com.day.cq.dam.cq-dam-similaritysearch", @"comDayCqDamDamWebdavSupport": @"com.day.cq.dam.dam-webdav-support", @"comDayCqPreUpgradeTasks": @"com.day.cq.pre-upgrade-tasks", @"comDayCqReplicationExtensions": @"com.day.cq.replication.extensions", @"comDayCqWcmCqMsmCore": @"com.day.cq.wcm.cq-msm-core", @"comDayCqWcmCqWcmTranslation": @"com.day.cq.wcm.cq-wcm-translation", @"dayCommonsJrawio": @"day-commons-jrawio", @"orgApacheAriesJmxWhiteboard": @"org.apache.aries.jmx.whiteboard", @"orgApacheFelixHttpSslfilter": @"org.apache.felix.http.sslfilter", @"orgApacheFelixOrgApacheFelixThreaddump": @"org.apache.felix.org.apache.felix.threaddump", @"orgApacheFelixWebconsolePluginsDs": @"org.apache.felix.webconsole.plugins.ds", @"orgApacheFelixWebconsolePluginsEvent": @"org.apache.felix.webconsole.plugins.event", @"orgApacheFelixWebconsolePluginsMemoryusage": @"org.apache.felix.webconsole.plugins.memoryusage", @"orgApacheFelixWebconsolePluginsPackageadmin": @"org.apache.felix.webconsole.plugins.packageadmin", @"orgApacheJackrabbitOakAuthLdap": @"org.apache.jackrabbit.oak-auth-ldap", @"orgApacheJackrabbitOakSegmentTar": @"org.apache.jackrabbit.oak-segment-tar", @"orgApacheJackrabbitOakSolrOsgi": @"org.apache.jackrabbit.oak-solr-osgi", @"orgApacheSlingBundleresourceImpl": @"org.apache.sling.bundleresource.impl", @"orgApacheSlingCommonsFsclassloader": @"org.apache.sling.commons.fsclassloader", @"orgApacheSlingCommonsLogWebconsole": @"org.apache.sling.commons.log.webconsole", @"orgApacheSlingDatasource": @"org.apache.sling.datasource", @"orgApacheSlingDiscoveryBase": @"org.apache.sling.discovery.base", @"orgApacheSlingDiscoveryOak": @"org.apache.sling.discovery.oak", @"orgApacheSlingDiscoverySupport": @"org.apache.sling.discovery.support", @"orgApacheSlingDistributionApi": @"org.apache.sling.distribution.api", @"orgApacheSlingDistributionCore": @"org.apache.sling.distribution.core", @"orgApacheSlingExtensionsWebconsolesecurityprovider": @"org.apache.sling.extensions.webconsolesecurityprovider", @"orgApacheSlingHcWebconsole": @"org.apache.sling.hc.webconsole", @"orgApacheSlingInstallerConsole": @"org.apache.sling.installer.console", @"orgApacheSlingInstallerProviderFile": @"org.apache.sling.installer.provider.file", @"orgApacheSlingInstallerProviderJcr": @"org.apache.sling.installer.provider.jcr", @"orgApacheSlingJcrDavex": @"org.apache.sling.jcr.davex", @"orgApacheSlingJcrResourcesecurity": @"org.apache.sling.jcr.resourcesecurity", @"orgApacheSlingJmxProvider": @"org.apache.sling.jmx.provider", @"orgApacheSlingLaunchpadInstaller": @"org.apache.sling.launchpad.installer", @"orgApacheSlingModelsImpl": @"org.apache.sling.models.impl", @"orgApacheSlingRepoinitParser": @"org.apache.sling.repoinit.parser", @"orgApacheSlingResourceInventory": @"org.apache.sling.resource.inventory", @"orgApacheSlingResourceresolver": @"org.apache.sling.resourceresolver", @"orgApacheSlingScriptingJavascript": @"org.apache.sling.scripting.javascript", @"orgApacheSlingScriptingJst": @"org.apache.sling.scripting.jst", @"orgApacheSlingScriptingSightlyJsProvider": @"org.apache.sling.scripting.sightly.js.provider", @"orgApacheSlingScriptingSightlyModelsProvider": @"org.apache.sling.scripting.sightly.models.provider", @"orgApacheSlingSecurity": @"org.apache.sling.security", @"orgApacheSlingServletsCompat": @"org.apache.sling.servlets.compat", @"orgApacheSlingServletsGet": @"org.apache.sling.servlets.get", @"orgApacheSlingStartupfilterDisabler": @"org.apache.sling.startupfilter.disabler", @"orgApacheSlingTracer": @"org.apache.sling.tracer", @"weRetailClientAppCore": @"we.retail.client.app.core" }];
}

/**
 * Indicates whether the property with the given name is optional.
 * If `propertyName` is optional, then return `YES`, otherwise return `NO`.
 * This method is used by `JSONModel`.
 */
+ (BOOL)propertyIsOptional:(NSString *)propertyName {

  NSArray *optionalProperties = @[@"comAdobeCqCdnCdnRewriter", @"comAdobeCqCloudConfigComponents", @"comAdobeCqCloudConfigCore", @"comAdobeCqCloudConfigUi", @"comAdobeCqComAdobeCqEditor", @"comAdobeCqComAdobeCqProjectsCore", @"comAdobeCqComAdobeCqProjectsWcmCore", @"comAdobeCqComAdobeCqUiCommons", @"comAdobeCqComAdobeCqWcmStyle", @"comAdobeCqCqActivitymapIntegration", @"comAdobeCqCqContexthubCommons", @"comAdobeCqCqDtm", @"comAdobeCqCqHealthcheck", @"comAdobeCqCqMultisiteTargeting", @"comAdobeCqCqPreUpgradeCleanup", @"comAdobeCqCqProductInfoProvider", @"comAdobeCqCqRestSites", @"comAdobeCqCqSecurityHc", @"comAdobeCqDamCqDamSvgHandler", @"comAdobeCqDamCqScene7Imaging", @"comAdobeCqDtmReactorCore", @"comAdobeCqDtmReactorUi", @"comAdobeCqExpJspelResolver", @"comAdobeCqInboxCqInbox", @"comAdobeCqJsonSchemaParser", @"comAdobeCqMediaCqMediaPublishingDpsFpCore", @"comAdobeCqMobileCqMobileCaas", @"comAdobeCqMobileCqMobileIndexBuilder", @"comAdobeCqMobileCqMobilePhonegapBuild", @"comAdobeCqMyspell", @"comAdobeCqSampleWeRetailCore", @"comAdobeCqScreensComAdobeCqScreensDcc", @"comAdobeCqScreensComAdobeCqScreensMqCore", @"comAdobeCqSocialCqSocialAsProvider", @"comAdobeCqSocialCqSocialBadgingBasicImpl", @"comAdobeCqSocialCqSocialBadgingImpl", @"comAdobeCqSocialCqSocialCalendarImpl", @"comAdobeCqSocialCqSocialContentFragmentsImpl", @"comAdobeCqSocialCqSocialEnablementImpl", @"comAdobeCqSocialCqSocialGraphImpl", @"comAdobeCqSocialCqSocialIdeationImpl", @"comAdobeCqSocialCqSocialJcrProvider", @"comAdobeCqSocialCqSocialMembersImpl", @"comAdobeCqSocialCqSocialMsProvider", @"comAdobeCqSocialCqSocialNotificationsChannelsWeb", @"comAdobeCqSocialCqSocialNotificationsImpl", @"comAdobeCqSocialCqSocialRdbProvider", @"comAdobeCqSocialCqSocialScfImpl", @"comAdobeCqSocialCqSocialScoringBasicImpl", @"comAdobeCqSocialCqSocialScoringImpl", @"comAdobeCqSocialCqSocialServiceusersImpl", @"comAdobeCqSocialCqSocialSrpImpl", @"comAdobeCqSocialCqSocialUgcbaseImpl", @"comAdobeDamCqDamCfmImpl", @"comAdobeFormsFoundationFormsFoundationBase", @"comAdobeGraniteApicontroller", @"comAdobeGraniteAssetCore", @"comAdobeGraniteAuthSso", @"comAdobeGraniteBundlesHcImpl", @"comAdobeGraniteCompatRouter", @"comAdobeGraniteConf", @"comAdobeGraniteConfUiCore", @"comAdobeGraniteCors", @"comAdobeGraniteCrxExplorer", @"comAdobeGraniteCrxdeLite", @"comAdobeGraniteCryptoConfig", @"comAdobeGraniteCryptoExtension", @"comAdobeGraniteCryptoFile", @"comAdobeGraniteCryptoJcr", @"comAdobeGraniteCsrf", @"comAdobeGraniteDistributionCore", @"comAdobeGraniteDropwizardMetrics", @"comAdobeGraniteFragsImpl", @"comAdobeGraniteGibson", @"comAdobeGraniteInfocollector", @"comAdobeGraniteInstallerFactoryPackages", @"comAdobeGraniteJettySsl", @"comAdobeGraniteJobsAsync", @"comAdobeGraniteMaintenanceOak", @"comAdobeGraniteMonitoringCore", @"comAdobeGraniteQueries", @"comAdobeGraniteReplicationHcImpl", @"comAdobeGraniteRepositoryChecker", @"comAdobeGraniteRepositoryHcImpl", @"comAdobeGraniteRestAssets", @"comAdobeGraniteSecurityUi", @"comAdobeGraniteStartup", @"comAdobeGraniteTagsoup", @"comAdobeGraniteTaskmanagementCore", @"comAdobeGraniteTaskmanagementWorkflow", @"comAdobeGraniteUiClientlibsCompilerLess", @"comAdobeGraniteUiClientlibsProcessorGcc", @"comAdobeGraniteWebconsolePlugins", @"comAdobeGraniteWorkflowConsole", @"comAdobeXmpWorkerFilesNativeFragmentLinux", @"comAdobeXmpWorkerFilesNativeFragmentMacosx", @"comAdobeXmpWorkerFilesNativeFragmentWin", @"comDayCommonsOsgiWrapperSimpleJndi", @"comDayCqCqAuthhandler", @"comDayCqCqCompatConfigupdate", @"comDayCqCqLicensebranding", @"comDayCqCqNotifcationImpl", @"comDayCqCqReplicationAudit", @"comDayCqCqSearchExt", @"comDayCqDamCqDamAnnotationPrint", @"comDayCqDamCqDamAssetUsage", @"comDayCqDamCqDamS7dam", @"comDayCqDamCqDamSimilaritysearch", @"comDayCqDamDamWebdavSupport", @"comDayCqPreUpgradeTasks", @"comDayCqReplicationExtensions", @"comDayCqWcmCqMsmCore", @"comDayCqWcmCqWcmTranslation", @"dayCommonsJrawio", @"orgApacheAriesJmxWhiteboard", @"orgApacheFelixHttpSslfilter", @"orgApacheFelixOrgApacheFelixThreaddump", @"orgApacheFelixWebconsolePluginsDs", @"orgApacheFelixWebconsolePluginsEvent", @"orgApacheFelixWebconsolePluginsMemoryusage", @"orgApacheFelixWebconsolePluginsPackageadmin", @"orgApacheJackrabbitOakAuthLdap", @"orgApacheJackrabbitOakSegmentTar", @"orgApacheJackrabbitOakSolrOsgi", @"orgApacheSlingBundleresourceImpl", @"orgApacheSlingCommonsFsclassloader", @"orgApacheSlingCommonsLogWebconsole", @"orgApacheSlingDatasource", @"orgApacheSlingDiscoveryBase", @"orgApacheSlingDiscoveryOak", @"orgApacheSlingDiscoverySupport", @"orgApacheSlingDistributionApi", @"orgApacheSlingDistributionCore", @"orgApacheSlingExtensionsWebconsolesecurityprovider", @"orgApacheSlingHcWebconsole", @"orgApacheSlingInstallerConsole", @"orgApacheSlingInstallerProviderFile", @"orgApacheSlingInstallerProviderJcr", @"orgApacheSlingJcrDavex", @"orgApacheSlingJcrResourcesecurity", @"orgApacheSlingJmxProvider", @"orgApacheSlingLaunchpadInstaller", @"orgApacheSlingModelsImpl", @"orgApacheSlingRepoinitParser", @"orgApacheSlingResourceInventory", @"orgApacheSlingResourceresolver", @"orgApacheSlingScriptingJavascript", @"orgApacheSlingScriptingJst", @"orgApacheSlingScriptingSightlyJsProvider", @"orgApacheSlingScriptingSightlyModelsProvider", @"orgApacheSlingSecurity", @"orgApacheSlingServletsCompat", @"orgApacheSlingServletsGet", @"orgApacheSlingStartupfilterDisabler", @"orgApacheSlingTracer", @"weRetailClientAppCore"];
  return [optionalProperties containsObject:propertyName];
}

@end