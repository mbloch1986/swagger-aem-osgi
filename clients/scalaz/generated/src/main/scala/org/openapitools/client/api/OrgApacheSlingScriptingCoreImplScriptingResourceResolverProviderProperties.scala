package org.openapitools.client.api

import argonaut._
import argonaut.EncodeJson._
import argonaut.DecodeJson._

import org.http4s.{EntityDecoder, EntityEncoder}
import org.http4s.argonaut._
import org.joda.time.DateTime
import OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties._

case class OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties (
  logStacktraceOnclose: Option[ConfigNodePropertyBoolean])

object OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties {
  import DateTimeCodecs._

  implicit val OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderPropertiesCodecJson: CodecJson[OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties] = CodecJson.derive[OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties]
  implicit val OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderPropertiesDecoder: EntityDecoder[OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties] = jsonOf[OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties]
  implicit val OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderPropertiesEncoder: EntityEncoder[OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties] = jsonEncoderOf[OrgApacheSlingScriptingCoreImplScriptingResourceResolverProviderProperties]
}
