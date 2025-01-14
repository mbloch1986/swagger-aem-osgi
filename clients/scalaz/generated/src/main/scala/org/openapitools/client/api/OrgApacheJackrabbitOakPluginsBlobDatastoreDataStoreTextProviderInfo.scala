package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderInfo._

case class OrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderInfo (
  pid: Option[String],
title: Option[String],
description: Option[String],
properties: Option[OrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderProperties])

object OrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderInfo {
  import DateTimeCodecs._

  implicit val OrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderInfoCodecJson: CodecJson[OrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderInfo] = CodecJson.derive[OrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderInfo]
  implicit val OrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderInfoDecoder: EntityDecoder[OrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderInfo] = jsonOf[OrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderInfo]
  implicit val OrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderInfoEncoder: EntityEncoder[OrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderInfo] = jsonEncoderOf[OrgApacheJackrabbitOakPluginsBlobDatastoreDataStoreTextProviderInfo]
}
