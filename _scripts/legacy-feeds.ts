// Quarto post-render hook: keep the feed URLs the Jekyll site published,
// so existing subscribers (and R-bloggers) keep working.
//   /feed.xml          -> full feed   (Quarto: /index.xml)
//   /rss/feed.R.xml    -> R category  (Quarto: /index-r.xml)
if (!Deno.env.get("QUARTO_PROJECT_RENDER_ALL")) Deno.exit(0);

const out = Deno.env.get("QUARTO_PROJECT_OUTPUT_DIR") ?? "_site";
const copies: [string, string][] = [
  ["index.xml", "feed.xml"],
  ["index-r.xml", "rss/feed.R.xml"],
];

await Deno.mkdir(`${out}/rss`, { recursive: true });
for (const [src, dst] of copies) {
  await Deno.copyFile(`${out}/${src}`, `${out}/${dst}`);
}
